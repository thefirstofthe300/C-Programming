/**
 * Name: Daniel Seymour
 * Assignment: Module 5, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * Design a fraction class. The class should have 2 data members to represent 
 * the numerator and denominator. Both of these numbers should obviously be 
 * integers. It should be able to display a fraction and include an operator 
 * for performing multiplication of fractions.
 * 
 * Construct the fraction class with 3 constructors. The first is the default.
 * The second constructor should allow us to create a fraction that represents
 * a whole number. The third constructor should allow us to specify the
 * numerator and denominator of a new fraction object. The public functions 
 * should include functions for respectively getting the numerator and 
 * denominator, setting the respective numerator and denominator, multiplying 
 * fractions, and displaying the fraction.
 * 
 * You should then use this class in a program that multiplies fractions.
 * (Hint: you can create 3 fraction objects f1, f2, and f3. You can use the
 * public function readFraction that reads 2 fractions f1 and f2. You can then
 * use the statement f3 = f1.multiply(f2) to calculate f1 * f2 and assign the
 * result to f3.)
 * 
 * The function's input prompts should be "Enter 1st fraction" and "Enter 2nd 
 * fraction" where the user enters the appropriate fractions. In addition, the
 * program needs to display the result of the multiplication operation in the 
 * readable format:
 * 
 * 3/4 * 5/6 = 15/24
 * 
 * This result should be displayed on one line.
 * 
 * Test the function with the fractions 3/4 and 5/6 and also with 1/2 and 1. 
 * (Note that your result will not provide the fraction in reduced form and you 
 * do not have to write code to reduce the fraction. Also note that we have not
 * restricted a fraction with a denominator of 0, but this would be a nice 
 * addition to your program.)
 */

#include <iostream>
#include "Fraction.h"

using namespace std;

void readFractions(Fraction& f1, Fraction& f2);
void splitStringToInt(string in, int& temp1, int& temp2);

int main()
{
	Fraction f1;
	Fraction f2;
	Fraction f3;

	readFractions(f1, f2);

	f3 = f1.multiply(f2);
	f1.printFraction();
	cout << " * ";
	f2.printFraction();
	cout << " = ";
	f3.printFraction();
	cout << endl;
	return 0;
}

void readFractions(Fraction& f1, Fraction& f2)
{
	string inFraction1;
	string inFraction2;
	int numerator;
	int denominator;
	cout << "Enter the first fraction in the format numerator/denominator: ";
	cin >> inFraction1;
	splitStringToInt(inFraction1, numerator, denominator);
	f1.setNumerator(numerator);
	f1.setDenominator(denominator);
	cout << "Enter the second fraction in the format numerator/denominator: ";
	cin >> inFraction2;
	splitStringToInt(inFraction2, numerator, denominator);
	f2.setNumerator(numerator);
	f2.setDenominator(denominator);
}

void splitStringToInt(string in, int& temp1, int& temp2)
{
	int int1;
	int int2;
	string comp;

	for (int i = 0; i < in.length(); i++)
	{
		comp = in.at(i);
		if (comp == "/")
		{
			int1 = stoi(in.substr(0, i));
			int2 = stoi(in.substr(i + 1));
			temp1 = int1;
			temp2 = int2;
			return;
		}
		else
		{
			int1 = stoi(in.substr(0));
			temp1 = int1;
			temp2 = 1;
		}
	}
}