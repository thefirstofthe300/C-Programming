/**
 * Name: Daniel Seymour
 * Assignment: Module 4, Section B, Problem 2
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Create a person class to represent a person. (You may call the class 
 * personType.) To simplify things, have the class have 2 variable members for 
 * the person's first and last name. Include 2 constructors. One should be a 
 * default constructor and the other should be one with parameters. Include 
 * respective functions for: setting the name, getting the name, and printing 
 * the name on the screen.
 * 
 * Have your main program call these functions to demonstrate how they work. 
 * Explain how you can replace both constructors with one constructor by using
 * a single constructor with default parameters.
 *
 * The explanation as to how to merge the two constructors is in the 
 * PersonType.h file.
 *
 */

#include <iostream>
#include "PersonType.h"

using namespace std;

int main()
{
	PersonType johnDoe("John", "Doe");
	string fullName;

	fullName = johnDoe.getName();

	cout << "Object johnDoe has the name " << fullName << "." << endl;

	johnDoe.setName("Jane", "Smith");

	cout << "After setting object johnDoe's name, the name in the object is below:" << endl;

	johnDoe.printName();

	return 0;
}