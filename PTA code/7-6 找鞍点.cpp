/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
int Jg_h_max(int a[7][7], int  h, int x, int  n);
int Jg_l_min(int  a[7][7], int l, int x, int  n);
int main()
{
	int flag = 0;
	int a[7][7] = {0};
	int h, l,n;
	scanf("%d", &n);
	for (h = 0; h < n; h++)
	{
		for (l = 0; l < n; l++)
		{
			scanf(" %d ",&a[h][l]);
		}
	}
	for (h = 0; h < n; h++)
	{
		for (l = 0; l < n; l++)
		{
			
			if (Jg_h_max(a, h, a[h][l], n) && Jg_l_min(a, l, a[h][l], n))
			{
			printf("%d %d\n", h, l);
			flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		printf("NONE");
	}
	system("pause");
return 0;
}
int Jg_h_max(int a[7][7], int  h, int x, int  n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (x < a[h][i])
			return 0;
	}
	return 1;
}
int Jg_l_min(int  a[7][7], int l, int x, int  n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (x > a[i][l])
			return 0;
	}
	return 1;
}
*/