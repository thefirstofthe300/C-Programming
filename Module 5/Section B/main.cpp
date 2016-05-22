/**
 * Name: Daniel Seymour
 * Assignment: Module 5, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * Create a function template that computes and displays the absolute value of
 * a passed argument. (By "absolute value" we mean that the template returns 
 * the number with no sign, whether the passed argument number is positive or
 * negative.)
 * 
 * Create a program that uses this function template, passing in two arguments
 * of type int, float, and double variable.
 * 
 * Have the template produce as output "The absolute value of number is (put in
 * absolute value of number here)."
 */

#include <iostream>

using namespace std;

template<typename T>
void absoluteValue(T number)
{
	cout << "The absolute value of number is " << (number < 0 ? number * -1 : number) << endl;
}

int main()
{
	int num1 = -100;
	int num2 = -323;
	float num3 = 734.12;
	float num4 = -9.214;
	double num5 = -423.3434;
	double num6 = 125.3212;

	absoluteValue(num1);
	absoluteValue(num2);
	absoluteValue(num3);
	absoluteValue(num4);
	absoluteValue(num5);
	absoluteValue(num6);

	return 0;
}