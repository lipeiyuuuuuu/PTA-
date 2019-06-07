/*本题要求计算并输出不超过n的最大的k个素数以及它们的和。
输入格式:
输入在一行中给出n(10≤n≤10000)和k(1≤k≤10)的值。
输出格式:
在一行中按下列格式输出: 素数1+素数2+…+素数k=总和值
其中素数按递减顺序输出。若n以内不够k个素数，则按实际个数输出。
输入样例1:1000 10
输出样例1:997+991+983+977+971+967+953+947+941+937=9664
输入样例2:12 6
输出样例2:11+7+5+3+2=28*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int judge(int n);
int main()
{
	int n, k, i, sum = 0;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= k - 1 && n>2;)
	{
		if (judge(n))
		{
			printf("%d+", n);
			sum += n;
			i++;
		}
		n--;
	}
	do
	{
		if (judge(n))
		{
			printf("%d=%d", n, sum + n);
			break;
		}
		n--;
	} while (n >= 2);
	system("pause");
	return 0;
}
int judge(int n)
{
	int i;
	if (n == 0 || n == 1)
		return 0;
	for (i = 2; i <= sqrt((double)n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}

*/