/**
 * Name: Daniel Seymour
 * Assignment: Final Programming Assignment, Problem 5
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * Derive the cube class from the base square class. Assume the square class
 * has a protected member variable representing the side called side and
 * declared as a double with a default value of 1.0. It also has a public
 * function called calcVal that evaluates the area of a square as side * side.
 * In your derived class have the default values for side be 1. For the cube
 * class include a public function calcVal that evaluates the volume of the 
 * cube. (Hint: The volume of the cube is side * square :: calcVal.)
 */

#include <iostream>
#include "Square.h"
#include "Cube.h"

using namespace std;

int main()
{
	Cube x;
	x.setSide(6);
	cout << "A cube with a side of value 6 has a volume of " << x.calcVal() << endl;
	x.setSide(1.45);
	cout << "A cube with a side of value 1.45 has a volume of " << x.calcVal() << endl;
	x.setSide(7.2);
	cout << "A cube with a side of value 7.2 has a volume of " << x.calcVal() << endl;
	return 0;
}