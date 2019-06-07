/*

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int cmp(const void * a, const void *b) //qsort库要求参数const
{
	//return (const*)b-(const*)a;
	return (*(int *)a - *(int *)b);
}
int main()
{
	int a[4][5], i, j, t[5], k;
	for (i = 0; i<4; i++)
	{
		for (k = 0; k<5; k++)
			scanf("%d", &a[i][k]);
	}

	for (i = 0; i<5; i++)
	{
		for (j = 0; j<4; j++)
			t[j] = a[j][i];
		qsort(t, 4, sizeof(int), cmp);
		for (k = 0; k<4; k++)
		{
			a[k][i] = t[k];
		}
	}
	for (i = 0; i<4; i++)
	{
		printf("%4d", a[i][0]);
		for (j = 1; j<5; j++)
		{
			printf("%4d", a[i][j]);
		}
		if (i != 3)
			printf("\n");
	}
	return 0;
}

*/