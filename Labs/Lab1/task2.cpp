#include "iostream"
using namespace std;
int main()
{
	int a = 0, b = 0;
	cout << "Enter a 1st number:";
	cin >> a;
	cout << "enter a second number:";
	cin >> b;
	if (a > b)
	{
		cout << "1st number is greater";
	}
	else if (a < b)
	{
		cout << "2nd number is greater";
	}
	else
	{
		cout << "both number are same";
	}
	return 0;
}