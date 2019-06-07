/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int sum_ge(int n);
int total(int flag);
int main()
{
	int num, flag,i;
	scanf("%d", &num);
	flag = num;
	for (i = 1; flag; i++)
	{
		flag = total(flag);
		printf("%d:%d\n", i, flag);
		if (flag == total(flag) && i != 1)
		{
			printf("%d:%d\n", i + 1, flag);
			break;
		}
		else if (flag == total(flag))
		{
			break;
		}
			
	}
	system("pause");
	return 0;
}
int sum_ge(int n)
{
	int sum=0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int total(int flag)
{
	return sum_ge(flag) * 3 + 1;
}


*/