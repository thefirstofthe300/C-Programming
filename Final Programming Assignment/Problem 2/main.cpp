/**
 * Name: Daniel Seymour
 * Assignment: Final Programming Assignment, Problem 2
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * Create a class that simulates an alarm clock. In this class you should:
 *
 * 1. Store time in hours, minutes, and seconds. Note if time is AM or PM. (Hint:
 * You should have separate private members for the alarm and the clock. Do not
 * forget to have a character variable representing AM or PM.)
 * 2. Initialize the clock to a specified time.
 * 3. Allow the clock to increment to the next second. (Hint: You need to take
 * into account things like if the clock's time is 11:59:59 AM and you increment 
 * by a second, the time will be 12:00:00 PM. You may need to consider some
 * iterated if statements.)
 * 4. Set the alarm and have the alarm print out "WAKE UP" when the set time is
 * reached. (Hint: You may wish to create a private function that provides the 
 * wished-for printout when the alarm time is reached and the alarm clock is on.)
 * 5. Display the present time.
 * 6. Use the class in a program that uses the functions requiring displaying of
 * time and setting of the alarm.
 * 
 * Include 2 constructors. One constructor should be the default constructor 
 * that will initialize the object to 12:00:00 AM. The second constructor should
 * take parameters for hours, minutes, seconds, and AM/PM. Both constructors 
 * will provide the private members with the time. In addition, have both
 * constructors set the alarm clock as off. (You will need a Boolean variable 
 * that determines whether the alarm is on or off). The function or method you 
 * use to set the alarm will set the alarm on.
 */

#include <iostream>
#include <thread>
#include <chrono>
#include "AlarmClock.h"

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main()
{
	AlarmClock alarmClock(11, 59, 55, "AM");
	alarmClock.setAlarm(12, 0, 0, "PM");
	alarmClock.setIsOn(false);
	cout << "Starting clock...if on *nix, press Ctrl-C to stop; otherwise, press Ctrl-D." << endl;;
	while (true)
	{
		sleep_for(seconds(1));
		alarmClock.getTime().displayTime();
		alarmClock.activateAlarm();
		alarmClock.incrementTime();
	}
	return 0;
}