#include "iostream"
using namespace std;
void GetEvenOdd(const int ar[], const int n_ar, int* &even, int& n_even,int* &odd,int &n_odd)
{
	
	for (int i = 0;i <n_ar;i++)
	{
		if (ar[i] % 2 == 0)
		{
			n_even++;
		}
		else
		{
			n_odd++;
		}
	}
	int* arrNewEven = new int[n_even];
	int* arrNewOdd = new int[n_odd];
	
	int a = 0;
	int b = 0;
	for (int i = 0;i < n_ar;i++)
	{
		if (ar[i] % 2 == 0)
		{
			*(arrNewEven + a) = ar[i];
			a++;
		}
		else
		{
			*(arrNewOdd + b) = ar[i];
			b++;
		}
	}
	if (n_even == 0)
		even = NULL;
	else
		even = arrNewEven;

	if (n_odd == 0)
		odd = NULL;
	else
		odd = arrNewOdd;
}
int main()
{
	int array1[10] = {1,2,3,4,5,6,7,8,9,10};
	int* arrayEven;
	int* arrayOdd;
	int evencount = 0;
	int oddcount = 0;
	
	GetEvenOdd(array1, 10, arrayEven, evencount, arrayOdd, oddcount);
	if (arrayEven == NULL)
	{
		cout << "No evens found" << endl;
	}
	else
	{
		cout << "Even Numbers : " << endl;
		for (int i = 0; i < evencount; i++)
		{
			cout << arrayEven[i] << "\t";
		}
	}
	cout << endl;
	if (arrayEven == NULL)
	{
		cout << "No odd found" << endl;
	}
	else
	{
		cout << "Odd Numbers : " << endl;
		for (int i = 0; i < oddcount; i++)
		{
			cout << arrayOdd[i] << "\t";
		}
	}

	delete[] arrayEven;
	delete[] arrayOdd;
	return 0;
}
