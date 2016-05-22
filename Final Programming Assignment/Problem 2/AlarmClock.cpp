#include "AlarmClock.h"
#include "Time.h"
#include <iostream>
#include <string>

AlarmClock::AlarmClock(){};
AlarmClock::AlarmClock(int hour, int minute, int second, string amOrPm)
{
	currentTime.setTime(hour, minute, second, amOrPm);
};
Time AlarmClock::getTime()
{
	return currentTime;
};
void AlarmClock::setTime(int hour, int minute, int second, string amOrPm)
{
	currentTime.setTime(hour, minute, second, amOrPm);
};
bool AlarmClock::getIsOn()
{
	return isOn;
};
void AlarmClock::setIsOn(bool newIsOn)
{
	isOn = newIsOn;
};
Time AlarmClock::getAlarm()
{
	return alarm;
};
void AlarmClock::setAlarm(int hour, int minute, int second, string amOrPm)
{
	alarm.setTime(hour, minute, second, amOrPm);
};
void AlarmClock::incrementTime()
{
	int tempHour;
	int tempMinute;
	int tempSecond = currentTime.getSecond();
	string tempAmOrPm;
	if (tempSecond == 59)
	{
		tempMinute = currentTime.getMinute();
		if (tempMinute == 59)
		{
			tempHour = currentTime.getHour();
			tempAmOrPm = currentTime.getAmOrPm();
			if (tempHour == 11)
			{
				if (tempAmOrPm == "AM")
				{
					currentTime.setAmOrPm("PM");
				}
				else
				{
					currentTime.setAmOrPm("AM");
				}
				currentTime.setHour(12);
			}
			else if (tempHour == 12)
			{
				currentTime.setHour(1);
			}
			else
			{
				currentTime.setHour(tempHour + 1);
			}
			currentTime.setMinute(0);
		}
		else
		{
			currentTime.setMinute(tempMinute + 1);
		}
		currentTime.setSecond(0);
	}
	else
	{
		currentTime.setSecond(tempSecond + 1);
	}
}
void AlarmClock::activateAlarm()
{
	if (getAlarm() == getTime() && getIsOn())
	{
		cout << "WAKE UP!" << endl;
	}
};