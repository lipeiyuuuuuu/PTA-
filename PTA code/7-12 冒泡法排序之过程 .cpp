/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 15
void outstr(int num[], int n);
int main()
{
	int n,num[N],t,min,i,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	if (n == 1)
	{
		printf("%d", num[0]);
		exit(0);
	}
	for (i = 0; i < n-1; i++)
	{
		min = num[0];
		for (j = 1; j < n-i; j++)
		{
			if (num[j]<num[j - 1])
			{
				t = num[j];
				num[j] = num[j - 1];
				num[j - 1] = t;
			}
		}
		outstr(num, n);
	}
	system("pause");
	return 0;
}
void outstr(int num[], int n)
{
	int i=0;
	printf("%d", num[i]);
	for (i = 1; i < n; i++)
	{
		printf(" %d", num[i]);
	}
	printf("\n");
}

*/