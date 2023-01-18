#include "iostream"
using namespace std;
char wordcounter(char steat[])

{
	int count = 0;
	for (int i = 0;steat[i] != '\0';i++)
	{
		if (steat[i] == 32)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int count = 0;
	char staetment[100];
	cout << "Enter a steatment:";
	cin >> staetment;
	count=wordcounter(staetment);
	cout << "Your totel words is:" << count;
	return 0;
}