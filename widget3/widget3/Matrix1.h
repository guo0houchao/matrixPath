#include "Matrix_node.h"
#include "Shape.h"
#include <QWidget>

class triangle;

class Matrix : public QWidget
{
	Q_OBJECT
public:
	explicit Matrix(QWidget *parent = nullptr);
	enum eshape
	{
		circle = 1, //圆形
		triangle,   //三角形
		rectangle   //矩形
	};
	enum ecolor
	{
		nocolor = 0,
		red = 1, //红色
		yellow,  //黄色
		blue     //蓝色
	};

	QList<QList<Matrix_node>> m_nNode;
	void mGetRow(int matrixRow)
	{
		m_irow = matrixRow;
	}
	void mGetColumn(int matrixColumn)
	{
		m_icolumn = matrixColumn;
	}
	double mdivide()
	{
		return m_idivide;
	}
public slots:
    void slot_initialize();

protected:
	void paintEvent(QPaintEvent *event);
	void resizeEvent(QResizeEvent *);

private:
	int m_irow;
	int m_icolumn;
	double m_idivide;
	int m_ilocpoint; //本程序特有图形顶点记录，不典型，用来存储一个常用顶点变化数值
	double areaCount;
	class rectangle rect;
	class triangle tri;
	class circle cir;
};
