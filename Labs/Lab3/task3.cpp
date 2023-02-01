#include "iostream"
#include "string"
using namespace std;
char* reversecase(const char* str)
{ 
	int len = strlen(str);
	char *newline=new char[len+1];
	char temp;
	int i = 0;
	for (i = 0;i < len;i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			temp = str[i] - 32;
		}
		else if (str[i] >= 65 && str[i]<=95)
		{
			temp = str[i] + 32;
		}
		else
		{
			temp = str[i];
		}
		newline[i] = temp;
		
	}
	newline[i] = '\0';
	return newline;
}
int main()
{
	char line[20];
	for (int i = 0;i < 15;i++)
	{
		line[i] = getchar();
	}
	
	char *reverse=reversecase(line);
	cout << reverse;
	return 0;
}
