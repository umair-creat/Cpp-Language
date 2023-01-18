#include <iostream>
using namespace std;
void subtractbypointer(double* ptrA, double* ptrB, double* ptrC)
{
    *ptrC = *ptrA - *ptrB;
}

int main() {
    double a = 0, b = 0, c = 0;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    subtractbypointer(&a, &b, &c);
    cout << "The value after subtract:" << c;
    return 0;
}