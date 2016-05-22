/**
 * Name: Daniel Seymour
 * Assignment: Module 3, Problem 2
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Write a program that includes the following four steps: 
 * 
 * Define a class called Plot that has private members of length and width. Include a constructor and
 * a public function that calculates the area and the length of the boundary of the field. Use public
 * functions in a program that computes and displays the area and the length of the boundary of the 
 * plot where the length and width are 7 and 9 respectively. Hint: The length of the boundary is 2 * 
 * (length + width).
 * 
 * Files: main.cpp, Plot.h, Plot.cpp
 * 
 * Compilation instuctions on my machine: g++ Plot.cpp main.cpp
 */

#include <iostream>
#include "Plot.h"

using namespace std;


int main()
{
	cout << "This program will create an object of class Plot, give it a width of 7 and a length of 9 and output the boundary of the object." << endl;
	cout << "It will then prompt for a new length and width and calculate the boundary using the new length and width." << endl;
	Plot newFigure(9, 7);

	newFigure.printBoundary();

	float newwid;
	float newlen;

	cout << "Please enter a new width: ";
	cin >> newwid;
	cout << "Please enter a new length: ";
	cin >> newlen;

	newFigure.setLength(newlen);
	newFigure.setWidth(newwid);

	newFigure.printBoundary();

	return 0;
}