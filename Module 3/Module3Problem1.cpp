/**
 * Name: Daniel Seymour
 * Assignment: Module 3, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * Write a program that includes the following four steps: 
 * 
 * Step 1.
 * Create a structure with the name StudentRecord containing a Name stored as an 
 * array of 20 characters, an ID stored as an integer, and a GPA stored as a floating-point 
 * number. Create (instantiate) a variable from StudentRecord called TESCStudent.
 * 
 * Step 2. Assign the following values to the variable by assuming Name is 
 * SuperProgrammer, with an ID of 1234, and a GPA of 4.0.
 * 
 * Step 3. The program should print out on the screen that SuperProgrammer with an 
 * Identification number of 1234 has a 4.0 GPA. (Of course, your program needs to use the 
 * structure you defined in step 1.)
 * 
 * Step 4. Generalize the program so that you can input the student's name, ID,
 * and GPA when the program is run. Please do not forget to include prompt statements in your 
 * program. Print out the user entered Name, ID, and GPA.
 */

#include <iostream>

using namespace std;

struct StudentRecord
{
	char name[20];
	int id;
	float gpa;
};

void printStudentRecord(struct StudentRecord);

 int main()
 {

 	cout << "This program will create a new student name with an ID number and GPA. It will print that students info out and ask you to input new info before printing out the info you entered." << endl;
	struct StudentRecord TESCStudent = { "SuperProgrammer", 1234, 4.0 };

	printStudentRecord(TESCStudent);

	cout << "Please enter a new student name less than 20 characters long: ";
	cin.getline(TESCStudent.name, 20);
	cout << "Please enter a new student ID: ";
	cin >> TESCStudent.id;
	cout << "Please enter a new student GPA: ";
	cin >> TESCStudent.gpa;

	printStudentRecord(TESCStudent);

 	return 0;
 }

void printStudentRecord(struct StudentRecord student)
{
	cout << "Student " << student.name << " (ID: " << student.id << ") has a GPA of " << student.gpa << "." << endl;
};