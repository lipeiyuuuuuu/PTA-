/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int h, i;
	int k, j;
	int juzhen[7][7];
	int sum[7];
	scanf("%d %d", &h, &i);
	for (k = 0; k < h; k++)
	{
		sum[k] = 0;
		for (j = 0; j < i; j++)
		{
			scanf("%d", &juzhen[k][j]);
			sum[k] += juzhen[k][j];
		}
	}
	for (j = 0; j < h; j++)
	{
		printf("%d\n", sum[j]);
	}
	system("pause");
	return 0;
	}*/