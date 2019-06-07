/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100005
int main()
{
	int n;
	char str[N], c;
	scanf("%d %c\n", &n, &c);
	gets(str);
	int len = strlen(str);
	if (len == n)
	{
		puts(str);
	}
	else if (len < n)
	{
		int i;
		for (i = 1; i <= n - len; i++)
		{
			printf("%c", c);
		}
		puts(str);
	}
	else
	{
		int i = len - n;
		printf("%c", str[i]);
		i++;
		while (str[i] != '\0')
		{
			printf("%c", str[i]);
			i++;
		}
	}
	system("pause");
	return 0;
}


*/