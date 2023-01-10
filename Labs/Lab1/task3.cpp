#include "iostream"
using namespace std;
int main()
{
	int num = 0;
	cout << "Enter a number:";
	cin >> num;
	if (num < 1 && num>10)
	{
		cout << "error";
	}
	switch (num)
	{
	case 1:
		cout << "The roman num 1 is I";
		break;
	case 2:
		cout << "The roman num 2 is II";
		break;
	case 3:
		cout << "The roman num 3 is III";
		break;
	case 4:
		cout << "The roman num 4 is IIII";
		break;
	case 5:
		cout << "The roman num 5 is v";
		break;
	case 6:
		cout << "The roman num 6 is vI";
		break;
	case 7:
		cout << "The roman num 7 is vII";
		break;
	case 8:
		cout << "The roman num 8 is vIII";
		break;
	case 9:
		cout << "The roman num 9 is Ix";
		break;
	case 10:
		cout << "The roman num 10 is x";
	default :
		cout << "wrong input";
	}
	return 0;
}