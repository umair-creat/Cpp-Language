#include <iostream>
using namespace std;

int main() {
    int x, y;
    x = 2;
    y = 2;
    int* ptrx = &x;
    int* ptry = &y;
    cout << "The address of x is" << &x << endl;
    cout << "The value of  x is:" << x << endl;
    cout << "The address of y is" << &y << endl;
    cout << "The value of  y is:" << y << endl;
    cout << "The address of ptrx is:" << &ptrx << endl;
    cout << "The address of ptry is:" << &ptry << endl;
    cout << "The value of  ptrx is:" << ptrx << endl;
    cout << "The value of  ptry is:" << ptry << endl;
    cout << "The value at  ptrx is:" << *ptrx << endl;
    cout << "The value at  ptry is:" << *ptry << endl;

    return 0;
}