/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define N 20
#define M 3
int judge(double sg, double tz);
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	double st[N][M];
	for (i = 0; i < n; i++)
	{
		scanf("%lf %lf", &st[i][0], &st[i][1]);
	}
	/*
	for (i = 0; i < n; i++)
	{
		printf("%.lf %.0lf\n", st[i][0], st[i][1]);
	}
	*/
/*
	for (i = 0; i < n; i++)
	{
		if (judge(st[i][0], st[i][1]) == -1)
			printf("You are tai shou le!\n");
		if (judge(st[i][0], st[i][1]) ==  0)
			printf("You are wan mei!\n");
		if (judge(st[i][0], st[i][1]) ==  1)
			printf("You are tai pang le!\n");
	}
	
	system("pause");
	return 0;
}
int judge(double sg, double tz)
{
	double flag, bz;
	bz = (sg - 100)*0.9 * 2;
	flag = (tz - bz) / bz;
	if (flag >= 0.1)
	{
		return 1;
	}
	else if (flag <= -0.1)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

*/