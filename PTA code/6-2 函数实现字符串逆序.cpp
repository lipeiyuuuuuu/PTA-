/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]);
int main()
{
	char s[MAXS];

	ReadString(s);
	StringCount(s);
system("pause");
return 0;
}
void f(char *p)
{
	int n = strlen(p) / 2;
	int i = 0;
	char temp;
	for (i = 0; i < n; i++)
	{
		temp = p[i];
		p[i] = p[strlen(p) - i - 1];
		p[strlen(p) - i - 1] = temp;
	}
	}*/