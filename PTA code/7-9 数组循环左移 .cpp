/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 110
void zuoyi(int num[],int n);
void read(int num[], int n);
int main()
{
	int num[N], i=0,n,m;
	scanf("%d%d\n", &n, &m);
	while (i<n)
	{
		scanf("%d", &num[i]);
		i++;
	}
	for (i = 0; i < m; i++)
		zuoyi(num, n);
	read(num, n);
	system("pause");
	return 0;
}
void zuoyi(int num[],int n)
{
	int t = num[0],i;
	for (i = 1; i<n; i++)
	{
		num[i - 1] = num[i];
	}
	num[n - 1] = t;
}
void read(int num[],int n)
{
	int i = 1;
	printf("%d", num[0]);
	while (i < n)
	{
		printf(" %d", num[i]);
		i++;
	}
	printf("\n");
}


*/