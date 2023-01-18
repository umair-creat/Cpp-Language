#include "iostream"
#include "cctype"
#include "conio.h"
using namespace std;
float Celsius(int i)
{
	//int farenheit = 0;
	float celsius = 0;
	//cout << "Enter a farenheit value:";
	//cin >> farenheit;
	celsius = 5 / 9 *(i - 32);
	return celsius;
}

int main()
{
	float celsius = 0;
	for (int i = 0; i <= 20; i++)
	{
		celsius = Celsius(i);
		cout << "celsius on : "<<i<<" is "<<celsius<<endl ;
	}
		
	
	return 0;
}
