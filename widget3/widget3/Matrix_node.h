#ifndef MATRIX_NODE_H
#define MATRIX_NODE_H
#include "Shape.h"

class Matrix_node
{
public:
	Matrix_node();
	~Matrix_node()
	{
		str_shape = nullptr;
		delete str_shape;
	}
	Shape *str_shape;
	int node_shape;
	int node_color;
	int node_row;
	int node_column;
	
};

#endif // MATRIX_NODE_H
