/*本题要求对任意给定的正整数N，求方程X
​2​​+Y​2​​=N的全部正整数解。
输入格式：输入在一行中给出正整数N（≤10000）。
输出格式：输出方程X​2​​+Y​2​​=N的全部正整数解，
其中X≤Y。每组解占1行，两数字间以1空格分隔，
按X的递增顺序输出。如果没有解，则输出No Solution。
输入样例1：884
输出样例1：10 28
20 22
输入样例2：11
输出样例2：No Solution*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int pow2(int n);
int main()
{
	int i,j;
	double n;
	scanf("%lf", &n);
	int flag = 1;
	for (i = 1; i <= sqrt(n); i++)
	{
		for (j = 1; j <= sqrt(n); j++)
		{
			if (pow2(i) + pow2(j) == n)
			{
				if (i < j)
				{
					printf("%d %d\n", i, j);
					flag = 0;
				}
				
			}
		}
	}
	if (flag)
		printf("No Solution");
	system("pause");
	return 0;
}
int pow2(int n)
{
	int i = 0;
	int res=1;
	for (i = 1; i <= 2; i++)
	{
		res *= n;
	}
	return res;
}


*/