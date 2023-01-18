#include "iostream"
#include"String"
using namespace std;
int sumup(int a,int b)
{
	int c;
	c = a + b;
	return c;

}
int main()
{
	int a = 0,aftersum=0;
	int std[10],std1[10];
	cout << "Enter array values:"<<endl;
	for (int i = 0; i <10; i++)
	{
		cin >> std[i];
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << " " << std[i] ;
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		std1[i] = sumup(std[a], std[a+1]);
		a+=2;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << std1[i] << ", ";
	}

	return 0;

}