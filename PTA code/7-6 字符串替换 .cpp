/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 101
int main()
{
	char s[N];
	gets(s);
	int i;
	int t;
	for (i = 0;s[i]!='\0'; i++)
	{
		if(s[i] >= 'A'&&s[i] <= 'Z')
		{
			s[i] = 'Z' - (s[i] - 'A');
		}
	}
	puts(s);
	system("pause");
	return 0;
	}*/