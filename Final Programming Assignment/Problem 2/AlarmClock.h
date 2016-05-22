#ifndef ALARM_CLOCK_H
#define ALARM_CLOCK_H

using namespace std;

#include "Time.h"

class AlarmClock
{
public:
	AlarmClock();
	AlarmClock(int hour, int minute, int second, string amOrPm);
	Time getTime();
	void setTime(int hour, int minute, int second, string amOrPm);
	bool getIsOn();
	void setIsOn(bool newIsOn);
	Time getAlarm();
	void setAlarm(int hour, int minute, int second, string amOrPm);
	void activateAlarm();
	void incrementTime();
private:
	Time currentTime;
	Time alarm;
	bool isOn;
};

#endif // ALARM_CLOCK_H
