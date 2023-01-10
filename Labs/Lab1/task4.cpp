#include "iostream"
using namespace std;
int main()
{
	int length1 = 0,width1 = 0, length2 = 0, width2 = 0,area1,area2;
	cout << "Enter a length:";
	cin >> length1;
	cout << "enter a width:";
	cin >> width1;
	cout << "Enter a length:";
	cin >> length2;
	cout << "enter a width:";
	cin >> width2;
	area1 = length1 * width1;
	area2 = length2 * width2;
	if (area1 < area2)
	{
		cout << "area 1 is greater";
	}
	else if (area1 > area2)
	{
		cout << "area 2 is greater";
	}
	else
	{
		cout << "both are same";
	}
	return 0;
}