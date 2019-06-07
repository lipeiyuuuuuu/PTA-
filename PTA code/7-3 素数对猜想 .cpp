/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define S 10000
int judge(int n);
int main()
{
	int N;
	scanf("%d", &N);
	int prime[S];
	int i,j;
	int num = 0;
	for (i = 2,j=0; i <= N;i++)
	{
//		printf("==================\n");
		if (judge(i))
		{
			prime[j] = i;
			j++;
//			printf("%d\n", prime[j-1]);
//			printf("==================%d\n",j);
			if (prime[j-1] - prime[j - 2] == 2&&j>1)
			{
//				printf("==================%d\n", num);
				num++;
			}
		}
	}
	printf("%d", num);
	system("pause");
	return 0;
}
int judge(int n)
{
	int i, t,flag;
	t = n/2;
	if (n == 1)
		return 0;
	else
	{
		for (i = 2; i <= t; i++)
		{
//			printf("==================\n");
			flag = n%i;
			if (flag == 0)
				return 0;
		}
	}
	return 1;
}
//     printf("==================\n");
*/