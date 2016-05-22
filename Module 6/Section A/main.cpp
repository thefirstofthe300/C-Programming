/**
 * Name: Daniel Seymour
 * Assignment: Module 6, Section A, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * Division by Zero Problem: Create a program titled Division. Have the program
 * prompt the user "Enter numerator and denominator" and store the two values
 * entered. (If you wish the user to "Enter numerator/denominator" be sure to
 * adjust your data gathering variables to include a holder variable for the
 * slash character.)
 * 
 * Include a function titled Quotient that takes 2 integers as input and 
 * provides the quotient of the 2 integers as integer output. (The remainder is
 * truncated. Thus, 5/3 will be 1.)
 * 
 * Define an exception class divByZero and have the function Quotient use throw
 * for an exception of this type if the denominator is 0. Display output "You 
 * cannot have a denominator that is equal to 0."
 * 
 * Quotient throws an exception to the higher-level function main to decide
 * whether or not the program should be terminated. Main catches the divByZero
 * and prints out an appropriate comment on the screen. Also include in main a try
 * block to catch the divide-by-zero error.
 *
 * If no exception occurs, print out a message "The quotient is xxxxx."
 */

#include <iostream>
#include "divByZero.h"

using namespace std;

int Quotient(int x, int y);

int main()
{
	int numerator, denominator, answer;

	cout << "Please enter the numerator: ";
	cin >> numerator;
	cout << "Please enter the denominator: ";
	cin >> denominator;

	try
	{
		answer = Quotient(numerator, denominator);
		cout << "The quotient is " << answer << "." << endl;
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
}

int Quotient(int x, int y)
{
	if (y == 0)
	{
		throw divByZero();
	}
	return x / y;
}