/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	int a[N][N];
	int b[N][N];
	int c[N][N] = {0};
	int i, j,k,ha,la,hb,lb,hc,hb;
	scanf("%d %d", &ha, &la);
	for (i = 0; i < ha; i++)
	{
		for (j = 0; j < la; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &hb, &lb);
	for (i = 0; i < hb; i++)
	{
		for (j = 0; j < lb; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	int h, l,f;
	if (hb == la)
	{
		h = ha;
		l = lb;
		f = hb;
	}
	else if (lb == ha)
	{
		h = hb;
		l = la;
		f = ha;
	}
	else
	{
		h = -1;
		l = -1;
	}
	if (h == -1 && l == -1)
	{
		printf("Error: Ca != Rb");
	}
	else
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < l; j++)
			{
				for ()
			}
		}
	}
	
	system("pause");
	return 0;
}
*/