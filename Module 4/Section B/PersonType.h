#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>

using namespace std;

class PersonType
{
public:
	/**
	 * The two constructors below can be merged using default parameters. When 
	 * the C++ compiler instantiates a new object, it creates all of the data
	 * members with empty values. Consequently, a constructor that uses default
	 * parameters set to "" could be used to replace the two constructors below.
	 * The end result would be the same. 
	 */
	PersonType();
	PersonType(string fname, string lname);
	
	public:
		string getName();
		void setName(string fname, string lname);
		void printName();
	private:
		string firstName;
		string lastName;
};

#endif