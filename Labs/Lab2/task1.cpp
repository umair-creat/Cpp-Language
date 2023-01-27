#include "iostream"
#include "string"
using namespace std;
int main()
{
	float* ptrx = NULL, *ptry = NULL;
	float* n1 = new float(4.5);
	float* n2 = new float(9.3);
	ptrx = n1;
	ptry = n2;
	cout << "Address of ptrx is: " << &ptrx << endl;
	cout << "Address of ptry is: " << &ptry << endl;
	cout << "value of ptrx is: " << ptrx << endl;
	cout << "value of ptry is: " << ptry << endl;
	cout << "value of memory notation ptrx: " << *ptrx << endl;
	cout << "value of memory notation ptry: " << *ptry << endl;
	delete[]n1;
	delete[]n2;
	return 0;
}
