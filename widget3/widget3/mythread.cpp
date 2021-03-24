#include "mythread.h"

MyThread::MyThread()
{
	m_itimeStop = 0;
	m_itablerow = 0;
	m_istop = 0;
	m_arrcolumn = new int[100];
}

void MyThread::run()
{
	int y = m_istart % m_icolumn - 1; //列
	int x = m_istart / m_icolumn;     //行
	if (y == -1)
	{
		x--;
		y = m_icolumn - 1;
	}

	int matrix[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matrix[i][j] = 0;
		}
	}
	DFS(matrix, x, y);
	m_itimeStop = 1;
}

int getNumber(int x, int y, int column)
{
	int tempx = x;
	int tempy = y;
	if (y == column - 1)
	{
		tempx++;
		tempy = -1;
	}
	return tempx * column + tempy + 1;
}

void MyThread::slot_getRow(int row)
{
	m_irow = row;
}

void MyThread::slot_getColumn(int column)
{
	m_icolumn = column;
}

void MyThread::slot_getStart(int start)
{
	m_istart = start;
}

void MyThread::slot_gettablerow(int tablerow)
{
	m_itablerow = tablerow;
}

int MyThread::DFS(int matrix[10][10], int x, int y)
{
	if (m_Lmatrixpoint.size() == m_irow * m_icolumn)
	{

		for (int i = 0; i < m_Lmatrixpoint.size(); i++)
		{
			m_arrcolumn[i] = m_Lmatrixpoint.at(i);
		}
	}

	//递归出口
	if (y < 0 || x < 0 || y >= m_icolumn || x >= m_irow || matrix[x][y] == 1)
	{
		return 0;
	}

	int number = getNumber(x, y, m_icolumn);
	m_Lmatrixpoint.append(number);

	//回溯算法
	matrix[x][y] = 1;

	int hasPath = 1;
	hasPath = (DFS(matrix, x, y - 1) || DFS(matrix, x - 1, y) || DFS(matrix, x, y + 1) || DFS(matrix, x + 1, y));
	if (hasPath == 0)
	{
		matrix[x][y] = 0;
		m_Lmatrixpoint.pop_back();
		if (m_Lmatrixpoint.size() == m_irow * m_icolumn - 1)
		{
			emit sig_sendInt(m_itablerow);
			emit sig_sendData(m_arrcolumn);
			m_itablerow++;
			tableWait.wait(&mutex);
			if (m_istop == 1)
			{
				tableWait.wait(&mutex2);
			}
		}
	}
	return hasPath;
}
