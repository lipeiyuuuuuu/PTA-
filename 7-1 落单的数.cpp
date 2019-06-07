#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 50005
int main()
{
	int  i = 0, n;
	int num[N] = { 0 };
	char c;
	do{
		scanf("%d%c", &num[i], &c);
		i++;
	} while (c !='\n');
	n = i;
	int j;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (num[i] == num[j]&&num[j]!=-1 &&j!=i)
			{
				num[i] = -1;
				num[j] = -1;
			}
		}
	}
	int flag = 1;
	int a, b;
	for (i = 0; i<n; i++)
	{
		if (num[i] != -1 && flag)
		{
			a = num[i];
			flag = 0;
		}
		else if (num[i]!=-1) 
		{
			b = num[i];
		}
	}
///	/*	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", num[i]);
//	}
	if (a > b)
		printf("%d %d", b, a);
	else 
		printf("%d %d",a, b);
	system("pause");
	return 0;
}
