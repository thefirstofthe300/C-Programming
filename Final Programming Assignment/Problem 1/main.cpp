/**
 * Name: Daniel Seymour
 * Assignment: Final Programming Assignment, Problem 1
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * This assignment requires you to code a simulation race between the tortoise 
 * and the hare. For this project, you be using random-number generation to
 * move the creatures. To make things more interesting, the animals have to
 * race up the side of a slippery mountain, which could cause them to lose
 * ground. In this race either animal could win or there could be a tie with
 * no clear winner.
 */

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <time.h>
#include "Tortoise.h"
#include "Hare.h"

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void printPositions(int, int);

int main()
{
	srand(time(NULL));
	Hare bugsBunny(0);
	Tortoise donatello(0);

	cout << "Bang! Off they go!" << endl;
	while (true)
	{
		bugsBunny.move();
		donatello.move();
		if (bugsBunny.getPosition() == 70 && donatello.getPosition() == 70)
		{
			cout << "Tie score--no winner! Want to race again?" << endl;
			break;
		}
		else if (bugsBunny.getPosition() == 70)
		{
			bugsBunny.winner();
			break;
		}
		else if (donatello.getPosition() == 70)
		{
			donatello.winner();
			break;
		}
		else if (bugsBunny.getPosition() == donatello.getPosition())
		{
			cout << "BUMP!" << endl;
		}
		else
		{
			printPositions(bugsBunny.getPosition(), donatello.getPosition());
		}
		sleep_for(seconds(1));
	}

	return 0;
}

void printPositions(int hare, int tortoise)
{
	char output[70] = "_____________________________________________________________________";

	output[hare] = 'H';
	output[tortoise] = 'T';

	cout << output << endl;
}