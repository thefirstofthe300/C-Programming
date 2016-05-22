#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

using namespace std;

class Square
{
public:
	void setSide(double x);
	double calcVal();
protected:
	double side;
};

#endif 