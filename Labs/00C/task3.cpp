#include "iostream"
using namespace std;
void getdata(int array[][4])
{
	cout << "Enter the num of matrix you want to transpose:" << endl;
	for (int  i = 0; i < 4; i++)
	{
		for (int j = 0;j < 4; j++)
		{
			cin >> array[i][j];
		}
	}
}
void display(int array[][4])
{
	cout << "The matrix you entered"<<endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0;j < 4; j++)
		{
			cout<< array[i][j];
			cout << "\t";
		}
		cout << endl;
	}
}
void transpose(int array[][4])
{
	int temp = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j && i > j)
			{
				temp = array[i][j];
				array[i][j] = array[j][i];
				array[j][i] = temp;
			}
		}
	}
}
void againdisplay(int array[][4])
{
	cout << endl << "Ater transpose" << endl;
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			cout << array[i][j];
			cout << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int array[4][4];
	getdata(array);
	display(array);
	transpose(array);
	againdisplay(array);
	return 0;
}