#include "iostream"
#include "string"
using namespace std;
int charges(int numofdays,int dailyrate,int hospitalcharges,int labtestcharges)
{
	int totel = 0;
	for (int i = 0;i < numofdays;i++)
	{
		totel += dailyrate + hospitalcharges + labtestcharges;
	}
	return totel;
}
int charges(int labtestcharges, int hospitalcharges)
{
	int totel = 0;
	totel = labtestcharges+hospitalcharges;
	return totel;
}

int main()
{
	string details;
	int totel = 0;
	int numofdays = 0,dailyrate=0,hospitalcharges=0,labtestcharges=0;
	cout << "Enter your datils you are 'in-patient or out-patient'.";
	getline(cin, details);
	if (details == "in-patient")
	{
		cout << "Enter the number of days spent in hospital:";
		cin >> numofdays;
		cout << "Enter the daily rate:";
		cin >> dailyrate;
		cout << "Enter the hospital madication charges:";
		cin >> hospitalcharges;
		cout << "Enter the charges for hospital services(lab tests,etc.):";
		cin >> labtestcharges;
		totel=charges(numofdays, dailyrate, hospitalcharges, labtestcharges);
	}
	else if (details == "out-patient")
	{
		cout << "Enter the charges for hospital services(lab tests,etc.).";
		cin >> labtestcharges;
		cout << "Enter the hospital madication charges:";
		cin >> hospitalcharges;
		totel=charges(labtestcharges, hospitalcharges);
	}
	else
	{
		cout << "ERROR"<<endl;
	}
	cout << "The totel number of charges is=" << totel << endl;
	return 0;
}