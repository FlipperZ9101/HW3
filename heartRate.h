#include <string>
using namespace std;

class heartRate
{
	public:
	//Constructor
	heartRate(string fName, string lName, int m, int d, int y);

	//Set Functions
	void setFName(string fName);
	void setLName(string lName);
	void setMonthBirth(int m);
	void setDayBirth(int d);
	void setYearBirth(int y);

	//Get Functions
	string getFName();
	string getLName();
	int getMonthBirth();
	int getDayBirth();
	int getYearBirth();
	int getAge();
	int getMaxHeartRate();
	void getTargetHeartRate(int &, int &);

	private:
	string firstName;
	string lastName;
	int dayBirth;
	int monthBirth;
	int yearBirth;
};
