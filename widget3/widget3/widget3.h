#ifndef WIDGET_H
#define WIDGET_H
#include "Shape.h"
#include "ui_widget3.h"
#include <QFile>
#include <QThread>
#include <QTimer>
#include <QTime>
#include <QXmlStreamWriter>
#include <mythread.h>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>

class Widget : public QWidget
{
	Q_OBJECT

public:
	explicit Widget(QWidget *parent = nullptr);


	public slots:
		void slot_clear();
		void slot_WalkAlgorithm();
		void slot_stop();
		void slot_getData(int *);
		void slot_getInt(int);
		void slot_showTime();
		void slot_fileOut();
		void slot_shapeMark();
		void slot_matrixArea();
		void slot_changeNode();

protected:
	void paintEvent(QPaintEvent *event);
	void resizeEvent(QResizeEvent *);

private:
	Ui::Widget ui;

	int m_irow;
	int m_icolumn;
	MyThread *thread;
	QTimer *t_timer;
	QTime m_Time;
	int m_itablerow;
};

#endif // WIDGET_H
