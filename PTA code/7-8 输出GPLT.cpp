/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 10010
#define M 1001
int main()
{
	char s[N];
	gets(s);
	int g=0,p=0,l=0,t=0;
	int i=0;
	while (s[i] != '\0')
	{
		if (s[i] == 'G' || s[i] == 'g')
			g++;
		else if (s[i] == 'P' || s[i] == 'p')
			p++;
		else if (s[i] == 'L' || s[i] == 'l')
			l++;
		else if (s[i] == 'T' || s[i] == 't')
			t++;
		i++;
	}
	int flag;
	do
	{
		flag = 0;
		if (g != 0)
		{
			printf("G");
			g--;
			flag = 1;
		}
		if (p != 0)
		{
			printf("P");
			p--;
			flag = 1;
		}
		if (l != 0)
		{
			printf("L");
			l--;
			flag = 1;
		}
		if (t != 0)
		{
			printf("T");
			t--;
			flag = 1;
		}
	} while (flag);
	system("pause");
	return 0;
}



*/