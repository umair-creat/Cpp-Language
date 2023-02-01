#include "iostream"
#include "string"

using namespace std;
void letterperword(const char* str);
int main()
{
	char line[] = {"umair is best  "};
	letterperword(line);
}
void letterperword(const char* str)
{
	char* temp = new char[20];
	int counter = 0;
	int i = 0;
	for (i = 0;str[i]!='\0';i++)
	{
	//	temp[i] = str[i];
	//	counter++;
		if (str[i] != ' ')
		{
			cout << str[i];
			counter++;
		}
		else
		{
			cout << "\t\t" << counter << endl;
			counter = 0;
		}
		if (str[i + 1] == '\0')
		{
			cout << "\t\t" << counter << endl;

		}
	}
	
}