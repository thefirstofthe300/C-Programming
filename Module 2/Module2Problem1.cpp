/**
 * Name: Daniel Seymour
 * Assignment: Module 2, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Create a program that reads five numbers, finds their sum, and then prints
 * the numbers in reverse order. Use arrays as a tool in your program.
 * 
 * You may choose to limit the number entered by the user to a
 * particular range. Be sure to prompt the user with this range, so you can 
 * deal with correct and incorrect numbers entered.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "This program will ask you for five numbers, find the sum and print them back in reverse order." << endl;
	float numbers[5];
	float total = 0;
	for (int i = 0; i < 5; ++i)
	{
		cout << "Enter a number: " << endl;
		cin >> numbers[i];
		total += numbers[i];
	}
	cout << "The total is " << total << endl;;
	for (int i = 4; i >= 0; i--)
	{
		cout << numbers[i] << endl;
	}
	return 0;
}