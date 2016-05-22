/**
 * Name: Daniel Seymour
 * Assignment: Module 2, Problem 2
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 * 
 * You are running a camp and must decide what activities to schedule. You 
 * decide to base the decision on the temperature measured in degrees Fahrenheit.
 * If the temperature is above 85°, you schedule swimming. If the temperature is
 * above 70° and less than or equal to 85°, you schedule baseball. If the
 * temperature is above 32° and less than or equal to 70°, you schedule 
 * basketball. Finally, if the temperature is below 32°, you send everyone home.
 * 
 * Create a program that takes the temperatures as input and provides as output
 * your sports decision. (Assume that temperatures are only expressed as integers.)
 * In the program include 2 void functions titled getTemp and printActivity, each
 * with an int argument.
 * 
 * The function getTemp should have a Reference parameter that gets the temperature
 * in getTemp and then passes the value back to be printed in main( ), and 
 * printActivity should have a Value parameter.
 * 
 * The function getTemp should prompt the user for the temperature in Fahrenheit,
 * get the input from the user, and return to main( ) where it prints the
 * temperature on the screen. The function printActivity should determine the
 * activity and print it as output on the screen. (Be careful and note that this
 * problem requires you to input the temperature into getTemp and not directly 
 * into the main function.) 
 */
 

#include <iostream>
#include <cstdlib>

using namespace std;

void getTemp(int& temp);
void printActivity(int temp);

int main()
{
	int numericTemp = 0;

	getTemp(numericTemp);
	printActivity(numericTemp);
	return 0;
}

void getTemp(int& temp)
{
	cout << "Enter today's temperature: " << endl;
	cin >> temp;
	cout << "Today's temperature is " << temp << endl;
}
void printActivity(int temp)
{
	if(temp >= 85)
	{
		cout << "Today's activity is swimming!" << endl;
	}
	else if (temp >= 70)
	{
		cout << "Today's activity is baseball!" << endl;
	}
	else if (temp >= 32)
	{
		cout << "Today's activity is basketball!" << endl;
	}
	else
	{
		cout << "It is a bit chilly outside. Everyone should go home." << endl;
	}
}