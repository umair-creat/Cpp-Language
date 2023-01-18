#include <iostream>
using namespace std;
void getminmax(int* ptrarray, int size, int* ptrmin, int* ptrmax)
{
    int temp1 = ptrarray[0], temp2 = ptrarray[0];
    for (int i = 0; i < 10; i++)
    {
        if (*(ptrarray + i) <= temp1)
        {
            *ptrmin = *(ptrarray + i);
            temp1 = *(ptrarray + i);
        }
        if (*(ptrarray + i) >= temp2)
        {
            *ptrmax = *(ptrarray + i);
            temp2 = *(ptrarray + i);
        }
    }
}

int main()
{
    int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int a, b;
    getminmax(array, 10, &a, &b);
    cout << "max value is  " << a << endl;
    cout << "mini value is  " << b << endl;

    return 0;
}