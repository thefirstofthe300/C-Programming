#ifndef TIME_H
#define TIME_H

#include <string>

using namespace std;

class Time
{
public:
	void displayTime();
	void setTime(int, int, int, string);
	int getHour();
	void setHour(int);
	int getMinute();
	void setMinute(int);
	int getSecond();
	void setSecond(int);
	string getAmOrPm();
	void setAmOrPm(string);
	bool operator==(Time);
protected:
	int hour;
	int minute;
	int second;
	string amOrPm;
};

#endif // TIME_H
