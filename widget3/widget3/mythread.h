#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QMutex>
#include <QThread>
#include <QWaitCondition>
class MyThread : public QThread
{
	Q_OBJECT
public:
	MyThread();
	~MyThread()
	{
		delete[] m_arrcolumn;
	}


	int DFS(int matrix[10][10], int x, int y);
	void WalkAlgorithm();
	QWaitCondition tableWait;
	QMutex mutex;
	QMutex mutex2;
	int mTimeStop()
	{
		return m_itimeStop;
	}
	int mTableRow()
	{
		return m_itablerow;
	}
	void mStop(int stopInt)
	{
		m_istop = stopInt;
	}
signals:
	void sig_sendData(int *);
	void sig_sendInt(int);

protected:
	void run();

	public slots:
		void slot_getRow(int);
		void slot_getColumn(int);
		void slot_getStart(int);
		void slot_gettablerow(int);

private:
	int m_itimeStop;
	int m_istop;
	int m_itablerow;
	int m_istart;
	int *m_arrcolumn;
	QList<int> m_Lmatrixpoint;
	int m_irow;
	int m_icolumn;
};

#endif // MYTHREAD_H