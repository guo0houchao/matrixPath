#include "widget3.h"
#include <QPainter>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	thread = new MyThread;
	t_timer = new QTimer();
	m_irow = 0;
	m_icolumn = 0;
	// m_Time.setHMS(0, 0, 0, 0);
	connect(ui.save_button, SIGNAL(clicked()), this, SLOT(slot_fileOut()));
	connect(ui.start_button, SIGNAL(clicked()), this, SLOT(slot_clear()));
	connect(ui.start_button, SIGNAL(clicked()), this, SLOT(slot_WalkAlgorithm()));
	connect(ui.tableWidget, SIGNAL(itemClicked(QTableWidgetItem *)), this, SLOT(update()));
	connect(ui.stop_button, SIGNAL(clicked()), this, SLOT(slot_stop()));

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(slot_shapeMark()));
	connect(ui.pushButton, SIGNAL(clicked()), ui.widget, SLOT(slot_initialize()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(slot_changeNode()));
	connect(ui.pushButton, SIGNAL(clicked()), ui.widget, SLOT(update()));

	connect(ui.area_button, SIGNAL(clicked()), this, SLOT(slot_matrixArea()));
}

void Widget::paintEvent(QPaintEvent *)
{

	//图的路径绘制

	QList<QTableWidgetItem *> items = ui.tableWidget->selectedItems();
	int column = items.size();

	if (m_irow * m_icolumn != column)
	{

		return;
	}
	QPainter painter(this);
	for (int i = 0; i < column - 1; i++)
	{

		int number = ui.tableWidget->item(ui.tableWidget->currentRow(), i)->text().toInt();
		int number2 = ui.tableWidget->item(ui.tableWidget->currentRow(), i + 1)->text().toInt();

		int y = number % m_icolumn - 1; //列
		int x = number / m_icolumn;     //行
		if (y == -1)
		{
			x--;
			y = m_icolumn - 1;
		}

		QTransform transform;
		transform.translate(y * 28 * ui.widget->mdivide(), x * 28 * ui.widget->mdivide());
		painter.setTransform(transform);

		double length = 19 * ui.widget->mdivide() - 19;
		QLine line1(static_cast<int>(9 - length / 2), 29, static_cast<int>(19 * ui.widget->mdivide()),
			29);                                                                                    // 左
		QLine line2(29, static_cast<int>(9 - length / 2), 29, static_cast<int>(19 * ui.widget->mdivide())); // 上
		QLine line3(39, 29, static_cast<int>(49 * ui.widget->mdivide()), 29);                               // 右
		QLine line4(29, 39, 29, static_cast<int>(49 * ui.widget->mdivide()));                               // 下

		if (number2 == number + m_icolumn)
		{
			painter.drawLine(line4);
		}
		else if (number2 == number + 1)
		{
			painter.drawLine(line3);
		}
		else if (number2 == number - 1)
		{
			painter.drawLine(line1);
		}

		else if (number2 == number - m_icolumn)
		{
			painter.drawLine(line2);
		}
	}
}

void Widget::slot_clear()
{
	ui.tableWidget->clear();
	thread->quit();
	thread = new MyThread;
}

void Widget::slot_stop()
{

	thread->mStop(1);
	m_Time.elapsed();
	t_timer->stop();
}

void Widget::slot_getData(int *data)
{
	for (int i = 0; i < m_irow * m_icolumn; i++)
	{
		ui.tableWidget->setItem(m_itablerow, i, new QTableWidgetItem(QString::number(data[i])));
	}
	thread->tableWait.wakeAll();
}

void Widget::slot_getInt(int row)
{
	m_itablerow = row;
	ui.tableWidget->setRowCount(m_itablerow + 1);
}

void Widget::slot_WalkAlgorithm()
{
	if (ui.widget->m_nNode.size() != 0)
	{
		connect(t_timer, SIGNAL(timeout()), this, SLOT(slot_showTime()));
		t_timer->start(1);
		m_Time.start();
		ui.tableWidget->setColumnCount(m_irow * m_icolumn);
		ui.tableWidget->resizeRowsToContents();
		ui.tableWidget->resizeColumnsToContents();
		int start = ui.start_point->text().toInt();

		connect(thread, SIGNAL(sig_sendInt(int)), this, SLOT(slot_getInt(int)));
		connect(thread, SIGNAL(sig_sendData(int *)), this, SLOT(slot_getData(int *)));

		thread->slot_getStart(start);
		thread->slot_getRow(m_irow);
		thread->slot_getColumn(m_icolumn);

		thread->start();
	}
}

void Widget::slot_changeNode()
{
	if (ui.lineEdit->text() != nullptr && ui.lineEdit_2->text() != nullptr && ui.widget->m_nNode.size() != 0
		&& m_irow * m_icolumn >= ui.lineEdit->text().toInt() * ui.lineEdit_2->text().toInt()
		&& ui.lineEdit->text().toInt() > 0 && ui.lineEdit_2->text().toInt() > 0)
	{
		int column = ui.lineEdit->text().toInt() - 1;
		int row = ui.lineEdit_2->text().toInt() - 1;
		int index = ui.comboBox->currentIndex();
		int index2 = ui.comboBox_2->currentIndex();
		ui.widget->m_nNode[row][column].node_color = index;
		ui.widget->m_nNode[row][column].node_shape = index2;
	}

	ui.widget->update();
}

void Widget::slot_shapeMark()
{
	m_irow = ui.matrixrow->text().toInt();
	m_icolumn = ui.matrixcolumn->text().toInt();
	ui.widget->mGetRow(m_irow);
	ui.widget->mGetColumn(m_icolumn);
}

void Widget::slot_showTime()
{

	ui.text_time->clear();
	ui.text_time->setText(QString::number(m_Time.elapsed()) + " ms");
	if (thread->mTimeStop() == 1)
	{
		t_timer->stop();
	}
}

void Widget::slot_fileOut()
{
	QFile data("../build-matrixwalk-Qt_4_8_5_msvc2010-Debug/data.xml");
	QString table;
	QList<QTableWidgetItem *> item;
	if (data.open(QFile::WriteOnly | QFile::Truncate))
	{
		QXmlStreamWriter out(&data);
		out.setAutoFormatting(true);
		for (int i = 0; i < thread->mTableRow(); i++)
		{

			for (int j = 0; j < m_irow * m_icolumn; j++)
			{
				table.append(ui.tableWidget->item(i, j)->text());
				table.append(" ");
			}
			out.writeTextElement("", table);
			out.writeEndElement();
			table.clear();
		}
	}
	QString strFilePath = QFileDialog::getOpenFileName(this, tr("open file"), QString(), tr("XML Files(*.xml)"));

	QDesktopServices::openUrl(QUrl::fromLocalFile(strFilePath));
	data.close();
}

void Widget::resizeEvent(QResizeEvent *)
{
	slot_matrixArea();
}

void Widget::slot_matrixArea()
{
	double areaCount = 0;
	for (int j = 0; j < m_irow; j++)
	{
		for (int i = 0; i < m_icolumn; i++)
		{
			areaCount += ui.widget->m_nNode[i][j].str_shape->shapeArea();
		}
	}
	ui.area_text->setText(QString::number(areaCount));
}
