#include "iostream"
using namespace std;
void getdata(int matrix1[3][3],int size1,int matrix2[3][3],int size2)
{
	cout << "Enter value fo rmatrix 1:";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cin >> matrix1[i][j];
		}
	}
	cout << "Enter value fo rmatrix 2:";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cin >> matrix2[i][j];
		}
	}
}
void display(int matrix1[][3], int matrix2[][3])
{
	cout << "first martix is" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << " " << matrix1[i][j];
		}
		cout << endl;
	}
	cout << "second matrix is" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << " " << matrix2[i][j];
		}
		cout << endl;
	}
}
void sum(int matrix1[][3], int matrix2[][3],int matrix3[][3])
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	cout << "After adding two matrix";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << " " << matrix3[i][j];
		}
		cout << endl;
	}
}
int main()
{
	int matrix1[3][3];
	int  matrix2[3][3],matrix3[3][3];
	getdata(matrix1,3,matrix2,3);
	display(matrix1, matrix2);
	sum(matrix1, matrix2, matrix3);
	return 0;
}
