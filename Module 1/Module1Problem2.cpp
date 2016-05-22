/**
 * Name: Daniel Seymour
 * Assignment: Module 1, Problem 2
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Write a program using a function and a switch statement. The user should be
 * prompted to enter a number in main. The function is called and the number 
 * entered is passed to the function. This function parameter will then be used 
 * in a switch to discover and print out the number word within the function 
 * (for example, 1=one, 2=two, 3=three, etc.). 
 * 
 * Enter a number: 1
 * You entered the number one. 
 * 
 * You may choose to limit the number entered by the user to a
 * particular range. Be sure to prompt the user with this range, so you can 
 * deal with correct and incorrect numbers entered.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

void IntToText(int number)
{
	switch(number)
	{
		case 1:
			cout << "The number is one." << endl;
			break;
		case 2:
			cout << "The number is two." << endl;
			break;
		case 3:
			cout << "The number is three." << endl;
			break;
		case 4:
			cout << "The number is four." << endl;
			break;
		case 5:
			cout << "The number is five." << endl;
			break;
		case 6:
			cout << "The number is six." << endl;
			break;
		case 7:
			cout << "The number is seven." << endl;
			break;
		case 8:
			cout << "The number is eight." << endl;
			break;
		case 9:
			cout << "The number is nine." << endl;
			break;
		case 10:
			cout << "The number is ten." << endl;
			break;
		default:
			cout << "The number is not recognized. You need to enter a number between 1 and 10." << endl;
			break;
	}
	
}

int main()
{
	int num;

	cout << "This program will ask you for a number and print the number out as text.\n" << endl;
	cout << "Please enter a number between 1 and 10: ";
	cin >> num;

	IntToText(num);

	/**
	 * I have included the following line commented because I personally am using the g++ compiler
	 * on a Linux system. Consequently, the system("pause") function doesn't actually work on my
	 * computer.
	 */

	// system("pause");
	 
	return 0;
}