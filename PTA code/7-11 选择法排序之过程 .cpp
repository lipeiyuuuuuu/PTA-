/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 11
int find_min_index(int num[], int star, int n);
void exchange(int num[], int index, int star);
int main()
{
	int n,num[N],i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	int j;
	if (n == 1)
	{
		printf("%d", num[0]);
		system("pause");
		exit(0);
	}
	
	for (i = 0; i < n - 1; i++)
	{
		exchange(num, find_min_index(num, i, n), i);
		printf("%d", num[0]);
		for (j = 1; j < n; j++)
		{
			printf(" %d", num[j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
void exchange(int num[], int index,int star )//最小下标index  起始位置 
{
	int temp;
	temp = num[star];
	num[star] = num[index];
	num[index] = temp;
}
int find_min_index(int num[], int star,int n)
{
	int min_index=star, i;
	for (i = star; i < n;i++)
	{
		if (num[min_index] > num[i])
			min_index = i;
	}
	return min_index;
}
*/