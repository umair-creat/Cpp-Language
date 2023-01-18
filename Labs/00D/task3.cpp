#include <iostream>
using namespace std;
void arraybypointer(float* ptrarray, int size)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "The value at " << (ptrarray + i) << " is " << *(ptrarray + i) << endl;
    }
}
int main()
{
    float array[10] = { 1,2,3,4,5,6,7,8,9,10 };
    arraybypointer(array, 10);
    return 0;
}