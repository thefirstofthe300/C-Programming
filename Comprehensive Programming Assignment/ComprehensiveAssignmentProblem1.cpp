/**
 * Name: Daniel Seymour
 * Assignment: Comprehensive Programming Assignment 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * You have 10 lowercase letters that you would like to arrange in alphabetical order.
 * Create a program to determine the first letter in alphabetical order out of the
 * 10 letters entered. (Please have your program enter the 10 letters one at a time.)
 * This should be done in a function using this prototype:
 * 
 * char firstletter (char x, char y);
 * 
 * Make sure you use a for loop expression inside your function. (Hint: you can order
 * letters using ASCII code, for example, a < c.)      
 */

#include <iostream>

using namespace std;

char firstletter(char x, char y);

int main()
{
	cout << "This program will ask you for 10 letters one at a time and print the first one alphabetically to the screen." << endl;

	char firstchar;
	char nextchar;

	cout << "Please enter a single letter: ";
	cin >> firstchar;

	for (int i = 0; i < 9; i++)
	{
		cout << "Please enter a single letter: ";
		cin >> nextchar;

		firstchar = firstletter(firstchar, nextchar);
	}

	cout << "The first letter alphabetically that you entered was " << firstchar;

	return 0;
}

char firstletter(char x, char y)
{
	if(x < y)
	{
		return x;
	}
	return y;
}