/**
 * Name: Daniel Seymour
 * Assignment: Comprehensive Assignment, Problem 3
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Define a class called Revenue that has 2 private members of demand and price.
 * Include a constructor and a public function that calculates the RevenueValue
 * of the class.
 * 
 * RevenueValue = demand * price
 * 
 * Use public functions of the class in a program that computes RevenueValue and
 * displays RevenueValue when demand is 2000 and price is 2.
 *
 * Compilation: g++ Revenue.cpp main.cpp
 */

#include <iostream>
#include "Revenue.h"

using namespace std;

int main()
{
	cout << "This program will find the revenue value for you.  First it will find the revenue value when demand equals 2000 and price equals 2.  Then it will ask you for a new demand and a new value and calculate the revenue value based on the values you input." << endl;
	Revenue newRevenue(2000, 2);

	newRevenue.printRevenueValue();

	float newDemand;
	float newPrice;

	cout << "Please enter a new demand: ";
	cin >> newDemand;
	cout << "Please enter a new price: ";
	cin >> newPrice;

	newRevenue.setDemand(newDemand);
	newRevenue.setPrice(newPrice);
	newRevenue.setRevenueValue();
	newRevenue.printRevenueValue();
	return 0;
}
