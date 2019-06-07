//正数的二进制最高位是零   负数的最高位是1

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int i=0,n;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("32");
	}
	else
	{
		while (n / 2 != 0)
		{
			i++;
			n /= 2;
		}
		if (n < 0)
		{
			printf("0");
		}
		else
		printf("%d", 31 - i);
	}
system("pause");
return 0;
}
*/
