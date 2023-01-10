#include "iostream"
#include <iomanip>
using namespace std;
int main()
{ 
	int choice = 0,distance=0;
	float time ;
	cout << "Medium                   Speed"<<endl;
	cout << "1-Air                   1100 feet per second"<<endl;
	cout << "2-Water                 4900 feet per second"<<endl;
	cout << "3-Steel                 16400 feet per second"<<endl;
	cout << "Enter a choice:";
	cin >> choice;
	cout << "Enter a distance:";
	cin >> distance;

	
	
	 if (choice == 1)
	{
		 time = distance / 1100;
		 cout << "time is :" <<fixed <<setprecision(4) << time;
	}
	 else if (choice == 2)
	 {
		time = distance / 4900;
		cout << "time is :"<<fixed << setprecision(4) << time;
	 }
	 else if (choice == 3)
	{
		time = distance / 16400;
		cout << "time is :"<<fixed << setprecision(4) << time;
	}
	 else
	 {
	 cout << "wronge choice";
 }
	return 0;
}