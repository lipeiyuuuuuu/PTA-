/*



#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 200
int judge_zishou(unsigned long int n);
int main()
{
int n, i;
unsigned long int num[N];
scanf("%d", &n);
for (i = 0; i < n; i++)
{
scanf("%ld", &num[i]);
}
for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", judge_zishou(num[i]));
else
printf(" %d", judge_zishou(num[i]));
}
system("pause");
return 0;
}
#include<stdlib.h>
#include<stdio.h>
#define N 200
int judge_zishou(unsigned long int n);
int main()
{
	int n, i;
	unsigned long int num[N];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", judge_zishou(num[i]));
		else
			printf(" %d", judge_zishou(num[i]));
	}
	system("pause");
	return 0;
}


int judge_zishou(unsigned long int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	int count = 2;
	unsigned long mul, number, k, a, b, mo;
	for (number = 1; number <= n; number++)
	{
		mo = number % 10;
		if (mo == 1 || mo == 2 || mo == 3 || mo == 4 || mo == 7 || mo == 8 || mo == 9)
			continue;
		for (mul = number, k = 1; (mul /= 10)>0; k *= 10);  
		a = k * 10;
		mul = 0;
		b = 10;
		while (k>0)
		{
			mul = (mul + (number % (k * 10))*(number%b - number % (b / 10))) % a;
			k /= 10;
			b *= 10;
		}
		if (number == mul)
		{
			count++;
		}
	}
	return count;
}


*/


/*
	
	int judge_zishou(unsigned long int n)
	{
	if (n == 0)
	return 1;
	if (n == 1)
	return 2;
	//巧妙的绕过了 计算平方的过程，因为太大的数字平方超出了范围。//count n以内的自守数个数
	int count = 2;
	unsigned long mul, number, k, a, b, mo;
	for (number = 1; number<=n; number++)
	{
	mo = number % 10;
	if (mo == 1 || mo == 2 || mo == 3 || mo == 4 || mo == 7 || mo == 8 || mo == 9)//模除为这些的  一定不是自守数 1 是自守数但上面已经判断
	continue;
	for (mul = number, k = 1; (mul /= 10)>0; k *= 10) ;   //将number的值赋mul  由mul去得到number的位数
	//k得到的值为mul或是number的权数（位数）,用于后面数字的截取  例如 number 为11  则k为10
	a = k * 10;//a 为权数的十倍
	mul = 0;
	b = 10;
//	printf("\n-------------------------------------------------\n");
	while (k>0)//模拟乘法按位相乘
	{
	mul = (   mul +      (          number % (k * 10)  )*(   number%b - number % (b / 10)  )         ) % a;//a=k*10
	//     上一次的前四位
	//       起始为0 mul          取number的后lgk+1位   取得number的特定位  倒数lgb位（包含b后的零）  模除以number的权数的十倍，取得尾数
//	printf("%d\t %d\t %d\t %d\t\n", mul, k, b, number);
	k /= 10;
	b *= 10;
	//模拟乘法  只计算权数之内的  之外的无影响
	//例如number = 9376
	//                    9  3  7  6     ----
	//               x    9  3  7  6     ----
	//  ---------------------------------
	//	      ……     5  6  2  5  6     ----9376*6       取前四位
	// 	      ……     5  6  3  2        ----9376*7*10    取前四位
	//-----------------------------------
	//	      …… 7   1  2  5  7  6     ----
	//        …… 8   1  2  8			 ----9376*3*100   取前四位
	//-----------------------------------
	//	      ……  5  2  5  3  7  6     ----
	//	      ……  3  8  4			     ----9376*9*1000  取前四位
	//-----------------------------------
	//	      ……  ……  9  3  7  6     ----             取前四位
	}
	//最后的到的mul是  number^2 的  与number相同位数的尾数
	if (number == mul)
	{
	count++;
//	printf("\n--------------------yes---------------------------------------------------yes\n");
	//system("pause");
	}
	else
	{
//	printf("\n--------------------no----------------------------\n");
	}
	}
	return count;
	}


	*/