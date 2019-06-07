/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[11][11];
	int h, i;
	int n;
	int k;
	scanf("%d", &n);
	for (h = 0; h < n;h++)
	{
		for (k = 0; k < n - h - 1; k++)
		{
			printf(" ");
		}
		for (i = 0; i <= h; i++)
		{
			if (i == 0)
			{
				a[h][i] = 1;
				printf("   1");
			}
			else if (i == h)
			{
				a[h][i] = 1;
				printf("   1");
			}
			else
			{
				a[h][i] = a[h - 1][i - 1] + a[h - 1][i];
				printf("%4d", a[h][i]);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
	}*/