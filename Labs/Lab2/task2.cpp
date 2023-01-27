#include "iostream"
using namespace std;
int main()
{
	int size = 0;
	int value = 0;
	int sum = 0;
	cout << "Enter the size you want to make an array:";
	cin >> size;
	int* array = new int(size);
	for (int  i = 0; i < size; i++)
	{
		cout << "Enter the value you want to sum:";
		cin >> (*arrar+i);
		sum += value;
	}
	cout << "Totel sum is :" << sum;
	delete(array);
	return 0;
}
