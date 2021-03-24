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
		circle = 1, //Բ��
		triangle,   //������
		rectangle   //����
	};
	enum ecolor
	{
		nocolor = 0,
		red = 1, //��ɫ
		yellow,  //��ɫ
		blue     //��ɫ
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
	int m_ilocpoint; //����������ͼ�ζ����¼�������ͣ������洢һ�����ö���仯��ֵ
	double areaCount;
	class rectangle rect;
	class triangle tri;
	class circle cir;
};
