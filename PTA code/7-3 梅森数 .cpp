
/*形如2​n​​−1的素数称为梅森数（Mersenne Number）。例如2​2​​−1=3、2​3​​−1=7都是梅森数。1722年，双目失明的瑞士数学大师欧拉证明了2​31
​​−1=2147483647是一个素数，堪称当时世界上“已知最大素数”的一个记录。
本题要求编写程序，对任一正整数n（n<20），输出所有不超过2​n​​−1的梅森数。*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int pow_1(int m, int n);
int judge_prime(int n);
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int flag = 1;
	for (i = 1; i <= n; i++)
	{
		if (judge_prime(pow_1(2, i) - 1))
		{
			printf("%d\n", pow_1(2, i) - 1);
			flag = 0;
		}
	}
	if (flag)
	{
		printf("None");
	}
	system("pause");
	return 0;
}
int pow_1(int m, int n)
{
	if (m == 0) return 0;
	else if (n == 0) return 1;
	int i,pow=1;
	for (i = 1; i <= n; i++)
	{
		pow *= m;
	}
	return pow;

}
int judge_prime(int n)
{
	if (n == 0 || n == 1)
		return 0;
	int i;
	double x = (double)n;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}*/
