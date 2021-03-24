#ifndef SHAPE_H
#define SHAPE_H
#include <cmath>

class Shape
{
public:
	Shape()
	{
	}

	virtual double shapeArea()
	{
		return 0;
	}
	virtual void setShapeSide(double side)
	{
		shape_side = side;
	}
	virtual ~Shape()
	{
	}

private:
	double shape_side;
};

class circle : public Shape
{
public:
	circle()
	{
	}
	double shapeArea()
	{
		return 3.14 * r * r / 4;
	}
	~circle()
	{
	}
	void setShapeSide(double side)
	{
		r = side;
	}

private:
	double r;
};
class triangle : public Shape
{
public:
	triangle()
	{
	}

	double shapeArea()
	{
		double p = 3 * m_iside / 2;
		return sqrt(p * (p - 1) * (p - 1) * (p - 1));
	}
	~triangle()
	{
	}
	void setShapeside(double side)
	{
		m_iside = side;
	}

private:
	double m_iside;
};

class rectangle : public Shape
{
public:
	rectangle()
	{
	}
	double shapeArea()
	{
		return 1;
	}
	~rectangle()
	{
	}
	void setShapeside(double side)
	{
		h = side;
	}

private:
	double h;
};
#endif // SHAPE_H
