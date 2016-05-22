/**
 * Name: Daniel Seymour
 * Assignment: Module 1, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Create a program to determine the largest number out of 15 numbers entered
 * (numbers entered one at a time). This should be done in a function using
 * this prototype:
 * 
 * double larger (double x, double y);
 *
 */

#include <iostream>
#include <cstdlib>

using namespace std;

double larger(double x, double y);

int main()
{
	cout << "This program will ask you for 15 numbers and print the largest number to your screen. Please only enter numbers.\n";

	double max;
	double userInput;

	for (int i = 0; i < 15; ++i)
	{
		cout << "Enter a number: ";
		cin >> userInput;
		max = larger(userInput, max);
	}
	
	cout << max;

	/**
	 * I have included the following line commented because I personally am using the g++ compiler
	 * on a Linux system. Consequently, the system("pause") function doesn't actually work on my
	 * computer.
	 */

	// system("pause");
	 
	return 0;
}

double larger(double x, double y)
{
	if (x < y)
	{
		return y;
	}
	else
	{
		return x;
	}
}