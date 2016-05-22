#include "Plot.h"
#include <iostream>

using namespace std;

Plot::Plot(float wid, float len)
{
	width = wid;
	length = len;
}
float Plot::getLength()
{
	return length;
}
void Plot::setLength(float newlen)
{
	length = newlen;
}
float Plot::getWidth()
{
	return width;
}
void Plot::setWidth(float newwid)
{
	width = newwid;
}
void Plot::printBoundary()
{
	cout << "The boundary is " << 2 * (width + length) << " units." << endl;
}