#include <iostream>
#include <stdlib.h>
#include <string>
#include "heartRate.h"
using namespace std;

heartRate::heartRate(string fName, string lName, int m, int d, int y)
{
	setFName(fName);
	setLName(lName);
	setMonthBirth(m);
	setDayBirth(d);
	setYearBirth(y);
}

void heartRate::setFName(string fName)
{
	firstName = fName;
}

void heartRate::setLName(string lName)
{
	lastName = lName;
}

void heartRate::setMonthBirth(int m)
{
	monthBirth = m;
}

void heartRate::setDayBirth(int d)
{
	dayBirth = d;
}

void heartRate::setYearBirth(int y)
{
	yearBirth = y;
}

string heartRate::getFName()
{
	return firstName;
}

string heartRate::getLName()
{
	return lastName;
}

int heartRate::getMonthBirth()
{
	return monthBirth;
}

int heartRate::getDayBirth()
{
	return dayBirth;
}

int heartRate::getYearBirth()
{
	return yearBirth;
}

int heartRate::getAge()
{
	int month, day, year;

	cout << "What number is the current month? \n";
	cin >> month;
	cout << endl;

	cout << "What number is the current day? \n";
	cin >> day;
	cout << endl;

	cout << "What number is the current year? \n";
	cin >> year;
	cout << endl;

	int x;

	if(getMonthBirth() > month)
	{
		x = 1;
	}
	else if((getMonthBirth() == month) && (getDayBirth() > day))
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	
	return ((year - getYearBirth()) - x);
}

int heartRate::getMaxHeartRate()
{
	return (220 - getAge());
}

void heartRate::getTargetHeartRate(int &minT, int &maxT)
{
	int max;
	max = getMaximumHeartRate();
	minT = (max * (50/100));
	maxT = (max * (85/100));
}


