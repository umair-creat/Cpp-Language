#include "iostream"
using namespace std;
int main()
{
	int seconds = 0,remseconds;
	cout << "Enter a  few seconds:";
	cin >> seconds;
	if (seconds == 60)
	{
		cout << "mintus are =1";
	}
	else if (seconds > 60 && seconds < 3600)
	{
		remseconds = seconds / 60;
		cout << "seconds is:" << remseconds;
	}
	else if (seconds >= 3600)
	{
		remseconds = seconds / 3600;
		cout << "hours is:" << remseconds;
	}
	else if (seconds >= 86400)
	{
		remseconds = seconds / 86400;
		cout << "days is:" << remseconds;
	}
	return 0;
}