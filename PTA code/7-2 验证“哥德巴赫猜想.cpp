/*数学领域著名的“哥德巴赫猜想”的大致意思是：任何一个大于2的偶数总能表示为两个素数之和。比如：24=5+19，
其中5和19都是素数。本实验的任务是设计一个程序，验证20亿以内的偶数都可以分解成两个素数之和。
输入格式：
输入在一行中给出一个(2, 2 000 000 000]范围内的偶数N。
输出格式：
在一行中按照格式“N = p + q”输出N的素数分解，其中p ≤ q均为素数。又因为这样的分解不唯一
（例如24还可以分解为7+17），要求必须输出所有解中p最小的解。*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int judge_prime(long int n);
int main()
{
	long int x,b,s,i;//b 较大的那个数  是s小的那个数
	scanf("%ld", &x);
//	long int i = 1;
	for (i = 2; i <= x/2; i++)
	{
		if (judge_prime(i) && judge_prime(x - i))
		{
//			printf("================\n");
			s = i;
			b = x - i;
			break;
		}
		
	}
	printf("%ld = %ld + %ld", x, s, b);
	system("pause");
	return 0;
}
int judge_prime(long int n)
{
	long int i;
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
