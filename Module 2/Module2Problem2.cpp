/**
 * Name: Daniel Seymour
 * Assignment: Module 2, Problem 2
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Design and run a program that takes a numerical score and outputs a letter
 * grade. Specific numerical scores and letter grades are listed below: In 
 * this program, create two void functions titled getScore and printGrade with 
 * an int argument. The function getScore should have a Reference parameter 
 * and printGrade should have a Value parameter.
 *
 * The function getScore will prompt the user for the numerical score, get 
 * the input from the user, and print the numerical score. The function 
 * printGrade will calculate the course grade and print the course grade. 
 * (Be careful and note that the assignment requires you to input the grade 
 * into getScore and not directly into the main function.) Do not forget to 
 * put in the proper prompts and appropriate output messages. (Note: This 
 * program is a natural for use of the switch command, but if/else structures 
 * will also work.)
 * 
 * You may choose to limit the number entered by the user to a
 * particular range. Be sure to prompt the user with this range, so you can 
 * deal with correct and incorrect numbers entered.
 */
 

#include <iostream>
#include <cstdlib>

using namespace std;

void getScore(int* grade);
void printGrade(int grade);

int main()
{
	int numericGrade;

	getScore(&numericGrade);
	printGrade(numericGrade);
	return 0;
}

void getScore(int* grade)
{
	cout << "Enter the students numeric score: " << endl;
	cin >> *grade;
	cout << "The students grade was " << *grade << endl;
}
void printGrade(int grade)
{
	if (grade < 0)
	{
		cout << "I am sorry. That can't be converted to a letter grade." << endl;
	}
	else if(grade <= 59)
	{
		cout << "The student's letter grade is an F." << endl;
	}
	else if (grade <= 69)
	{
		cout << "The student's letter grade is a D." << endl;
	}
	else if (grade <= 79)
	{
		cout << "The student's letter grade is a C." << endl;
	}
	else if (grade <= 89)
	{
		cout << "The students letter grade is a B." << endl;
	}
	else if (grade <= 100)
	{
		cout << "The student's letter grade is an A." << endl;
	}
	else
	{
		cout << "I am sorry. That can't be converted to a letter grade." << endl;
	}
}