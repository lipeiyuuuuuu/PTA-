/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int h = 3, i = 3;
	for (h = 0; h < 3; h++)
	{
		for (i = 0; i < 3; i++)
		{
			if (h < i)
			{
				a[h][i] = a[h][i] + 3;
			}
			if (h>i)
			{
				a[h][i] = a[h][i] * 2;
			}
			if (h == i)
			{
				a[h][i] = a[h][i] * a[h][i];
			}
		}
	}
	for (h = 0; h < 3; h++)
	{
		for (i = 0; i < 3; i++)
		{
			printf("%3d", a[h][i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
	}*/