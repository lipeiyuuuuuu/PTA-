/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 8
void yi(int mt[], int n,int t);
int main()
{
	int n, m, i, j,k;
	scanf("%d %d", &m, &n);
	int  mt[N][N];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &mt[i][j]);
		}
		for(k = 0; k < m; k++)
		{
			yi(mt[i],n,mt[i][0]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", mt[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

void yi(int mt[],int n,int t)
{
	int i;
	for (i = 0; i <n-1; i++)
	{
		mt[i] = mt[i+1];
	}
	mt[n-1] = t;
}


*/
