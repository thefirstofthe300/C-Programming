#include "Square.h"

void Square::setSide(double x)
{
	side = x;
};


double Square::calcVal()
{
	return side * side;
};