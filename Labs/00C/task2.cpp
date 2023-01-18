#include "iostream"
using namespace std;
void getdata(int array[], int size)
{
	cout << "Enter the numbers in array";
	int a=0;
	for (int i = 0;i < size;i++)
	{
		cin >> array[i];
	}
}
void display(int array[], int size)
{
	cout << "{ ";
	for (int i = 0; i < 10; i++)
	{
		cout << array[i];
		cout << "\t";
	}
	cout << "}";
	cout << endl;
}
int counteven(int array[],int size)
{
	int even  = 0, evencount = 0;
	for (int i = 0; i < 10; i++)
	{
		if (array[i] % 2 == 0) 
		{
			evencount++;
		}
	}
	return evencount;
}
float mean(int array[],int size)
{
	int counter = 0, sum = 0, calculation;
	for (int i = 0;i < 10;i++)
	{
		sum+=array[i];
		counter++;
	}
	calculation = sum / counter;
	return calculation;
}
int main()
{
	float meanvalue = 0.0;
	int array[10],even=0;
	getdata(array,10);
	display(array, 10);
	even = counteven(array, 10);
	meanvalue=mean(array, 10);
	cout << "Totel number of even is:"<<even<<endl;
	cout << "Mean value=" << meanvalue;

}