
#include "iostream"

using namespace std;



int* getPositiveNumbers(const int ar[], const int size, int& newArraySize)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (ar[i] > 0)
		{
			newArraySize++;
		}
	}
	if (newArraySize == 0)
	{
		return NULL;
	}

	int* arrNew = new int[newArraySize];

	for (int i = 0; i < size; i++)
	{
		if (ar[i] > 0)
		{
			arrNew[count] = ar[i];
			count++;
		}
	}
	return arrNew;

}
int* getPositiveNumbers(const int ar[], const int size, int& newArraySize);
int main()
{
	
	int arr[10];
	int newSize = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number you want to saprate :";
		cin >> arr[i];
	}

	int* newArrPtr = getPositiveNumbers(arr, 10, newSize);

	if (newArrPtr == NULL)
	{
		cout << "No positive Number found." << endl;
	}
	else
	{

		cout << "Positive Numbers  :"<<endl;
		for (int i = 0; i < newSize; i++)
		{
			cout << *(newArrPtr + i) << endl;
		}
	}
	delete[] newArrPtr;
	return 0;
}
