#include "Matrix1.h"
#include <QPainter>
#include <iostream>
using namespace std;
Matrix::Matrix(QWidget *parent)
	: QWidget(parent)
{
	m_idivide = 1.0;
	m_ilocpoint = 20;
}

void Matrix::resizeEvent(QResizeEvent *)
{
	double wdivide = static_cast<double>(this->width()) / static_cast<double>(300);
	double hdivide = static_cast<double>(this->width()) / static_cast<double>(300);
	m_idivide = wdivide < hdivide ? wdivide : hdivide;
	m_ilocpoint = static_cast<int>(20 * m_idivide);
}

void Matrix::slot_initialize()
{

	QList<Matrix_node> row_node;
	Matrix_node node;
	m_nNode.clear();

	for (int i = 0; i < m_irow; i++)
	{
		row_node.append(node);
	}

	for (int j = 0; j < m_icolumn; j++)
	{
		m_nNode.append(row_node);
	}
}

void Matrix::paintEvent(QPaintEvent *)
{

	QPainter painter(this); //创建Painter对象
	int number = 1;
	for (int j = 0; j < m_irow; j++)
	{
		for (int i = 0; i < m_icolumn; i++)
		{
			//位置变换
			QTransform transform;
			transform.translate((i)*28 * m_idivide, (j)*28 * m_idivide);
			painter.setTransform(transform);

			// 颜色变换
			if (m_nNode[i][j].node_color == nocolor)
			{
				QBrush brush(Qt::white, Qt::SolidPattern);
				painter.setBrush(brush);
			}

			if (m_nNode[i][j].node_color == red)
			{
				QBrush brush(Qt::red, Qt::SolidPattern);
				painter.setBrush(brush);
			}
			else if (m_nNode[i][j].node_color == yellow)
			{
				QBrush brush(Qt::yellow, Qt::SolidPattern);
				painter.setBrush(brush);
			}
			else if (m_nNode[i][j].node_color == blue)
			{
				QBrush brush(Qt::blue, Qt::SolidPattern);
				painter.setBrush(brush);
			}

			//形状变换

			if (m_nNode[i][j].node_shape == circle)
			{

				painter.drawEllipse(10, 10, m_ilocpoint, m_ilocpoint);
				m_nNode[i][j].str_shape = &cir;
				cir.setShapeSide(m_idivide);
			}
			else if (m_nNode[i][j].node_shape == triangle)
			{

				QPoint points[3] = { QPoint(m_ilocpoint / 2 + 10, 10), QPoint(10, m_ilocpoint + 10),
					QPoint(m_ilocpoint + 10, m_ilocpoint + 10) }; //上，左，右顶点

				painter.drawPolygon(points, 3);
				m_nNode[i][j].str_shape = &tri;
				tri.setShapeside(m_idivide);
			}
			else if (m_nNode[i][j].node_shape == rectangle)
			{
				QPoint points[4] = { QPoint(10, 10), QPoint(m_ilocpoint + 10, 10),
					QPoint(m_ilocpoint + 10, m_ilocpoint + 10), QPoint(10, m_ilocpoint + 10) };
				painter.drawPolygon(points, 4);
				m_nNode[i][j].str_shape = &rect;
				rect.setShapeside(m_idivide);
			}

			painter.setPen(Qt::black);
			painter.drawText(static_cast<int>((i + 13) * m_idivide), static_cast<int>((j + 20) * m_idivide),
				QString::number(number));
			number++;
		}
	}
}