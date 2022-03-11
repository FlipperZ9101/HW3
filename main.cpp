#include <iostream>
#include <string>
#include "heartRate.h"
using namespace std;

int main()
{
	string fName = "";
	string lName = "";

	int m, d, y;
	int minTarget, maxTarget;

	cout << "Enter your name and your date of birth (first name, last name, month, day, year, in that order): \n";

	cin >> fName >> lName >> m >> d >> y;

	heartRate person(fName, lName, m, d, y);

	int age = person.getAge();

	cout << "Name: " << person.getFName() << " " << person.getLName() << 
	"\nDate Of Birth: " << person.getMonthBirth() << "/" << person.getDayBirth() << "/" << person.getYearBirth() << "\n" << endl;
	
	cout << "Age: " << age << " years old\n" << endl;
	
	cout << "Max Heart Rate: " << person.getMaxHeartRate(age) << endl;
	
	cout << "Target Heart Rate: ";
	person.getTargetHeartRate(minTarget, maxTarget, age);
	
	cout << minTarget << " - " << maxTarget;
	cout << endl; 
}
