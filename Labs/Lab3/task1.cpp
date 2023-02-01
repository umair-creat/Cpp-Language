#include "iostream"
using namespace std;
int* pairwisesum(const int ar[], const int size, int& arraysize);
int main()
{
	int* array1 = new int[9];
	cout << "Enter the value:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cin >> *(array1 + i);
	}
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << *(array1 + i)<<"\t"<<endl;
	}
	int array2 ;
	
	int* array3=pairwisesum(array1, 9, array2);

	for (int i = 0; i < array2; i++)
	{
		cout <<array3[i]<< "\t";
	}
	return 0;
}
int* pairwisesum(const int ar[], const int size, int& arraysize)
{
	int a = 0;
	arraysize = (size/2);
	int *arr = new int[arraysize];
	for (int i = 0; i < 10; i++)
	{	
			arr[a] = ar[i] + ar[i + 1];
			i++;
			a++;
	}
	return  arr ;
}
