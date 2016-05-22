#include <string>
#include <iostream>
#include "PersonType.h"

using namespace std;

PersonType::PersonType(string fname, string lname)
{
	firstName = fname;
	lastName = lname;
}
string PersonType::getName()
{
	string fullName = firstName + " " + lastName;
	return fullName;
}
void PersonType::setName(string fname, string lname)
{
	firstName = fname;
	lastName = lname; 
}
void PersonType::printName()
{
	cout << "First name: " << firstName << "." << endl;
	cout << "Last name: " << lastName << "." << endl;
}