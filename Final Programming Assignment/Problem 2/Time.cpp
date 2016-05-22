#include "Time.h"
#include <string>
#include <iostream>
#include <iomanip>

void Time::displayTime()
{
	cout << setw(2) << setfill('0') << getHour() << ":" << setw(2) << setfill('0') << getMinute() << ":" << setw(2) << setfill('0') << getSecond() << " " << getAmOrPm() << endl;
};
void Time::setTime(int newHour, int newMinute, int newSecond, string newAmOrPm)
{
	setHour(newHour);
	setMinute(newMinute);
	setSecond(newSecond);
	setAmOrPm(newAmOrPm);
};
int Time::getHour()
{
	return hour;
};
void Time::setHour(int newHour)
{
	hour = newHour;
};
int Time::getMinute()
{
	return minute;
};
void Time::setMinute(int newMinute)
{
	minute = newMinute;
};
int Time::getSecond()
{
	return second;
};
void Time::setSecond(int newSecond)
{
	second = newSecond;
};
string Time::getAmOrPm()
{
	return amOrPm;
};
void Time::setAmOrPm(string newAmOrPm)
{
	amOrPm = newAmOrPm;
}
bool Time::operator==(Time otherTime)
{
	if (getHour() == otherTime.getHour() && getMinute() == otherTime.getMinute()
		&& getSecond() == otherTime.getSecond() && getAmOrPm() == otherTime.getAmOrPm())
	{
		return true;
	}
	else
	{
		return false;
	}
}