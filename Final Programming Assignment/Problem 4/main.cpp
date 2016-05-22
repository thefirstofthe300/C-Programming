/**
 * Name: Daniel Seymour
 * Assignment: Final Programming Assignment, Problem 4
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * 
 * Create a template that changes the value of 2 variables. (Hint: Use 
 * reference parameters since you will swap the variables within the
 * function.) Use the template in a program where you change the value of 2 
 * variables of type int and 2 variables of type long.
 */

#include <iostream>

using namespace std;

template<typename T>
void swapValue(T &x, T &y)
{
	T temp;
	temp = y;
	y = x;
	x = temp;
}

int main()
{
	int a = 100;
	int b = 200;

	cout << "Variable a equals "<< a << "." << endl;
	cout << "Variable b equals "<< b << "." << endl;

	swapValue(a, b);

	cout << "Variable a equals "<< a << "." << endl;
	cout << "Variable b equals "<< b << "." << endl;

	long c = 21029;
	long d = 539213;

	cout << "Variable c equals "<< c << "." << endl;
	cout << "Variable d equals "<< d << "." << endl;

	swapValue(c, d);

	cout << "Variable c equals "<< c << "." << endl;
	cout << "Variable d equals "<< d << "." << endl;

	return 0;
}