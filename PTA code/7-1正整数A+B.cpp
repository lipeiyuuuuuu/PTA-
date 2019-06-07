/*7-1 正整数A+B （15 分）
题的目标很简单，就是求两个正整数A和B的和，其中A和B都在区间[1,1000]。稍微有点麻烦的是，输入并不保证是两个正整数。
输入格式：
输入在一行给出A和B，其间以空格分开。问题是A和B不一定是满足要求的正整数，有时候可能是超出范围的数字、负数、带小数点的实数、甚至是一堆乱码。
注意：我们把输入中出现的第1个空格认为是A和B的分隔。题目保证至少存在一个空格，并且B不是一个空字符串。
输出格式：
如果输入的确是两个正整数，则按格式A + B = 和输出。如果某个输入不合要求，则在相应位置输出?，显然此时和也是?。
输入样例1：
123 456
输出样例1：
123 + 456 = 579
输入样例2：
22. 18
输出样例2：
? + 18 = ?
输入样例3：
-100 blabla bla...33
输出样例3：
? + ? = ?
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int trans(char num[]);
int judge_num(char num[]);
#define N 1000
int main()
{
	char x[N];
	char y[N];
	char sum;
	scanf("%s",x);
	getchar();
	gets(y);
	if (judge_num(x) && judge_num(y))
	{
		if (trans(x) > N &&trans(y) > N)
		{
			printf("? + ? = ?");
		}
		else if (trans(x) > N&&trans(y) <= N)
		{
			printf("? + %d = ?", trans(y));
		}
		else if (trans(x) <= N&&trans(y) > N)
		{
			printf("%d + %d = ?", trans(x));
		}
		else
		{
			printf("%d + %d = %d", trans(x), trans(y), trans(x) + trans(y));
		}
	}
	else if (judge_num(x) && !judge_num(y))
	{
		if (trans(x) > N)
		{
			printf("? + ? = ?");
		}
		else
		{
		printf("%d + ? = ?", trans(x));
		}
	}
	else if (!judge_num(x) && judge_num(y))
	{
		if (trans(y) > N)
		{
			printf("? + ? = ?");
		}
		else
		{
		printf("? + %d = ?", trans(y));
		}
	}
	else 
	{
		printf("? + ? = ?");
	}
	system("pause");
	return 0;
}
int judge_num(char num[])
{
	int i;
	i = 0;
	for (i = 0; i < strlen(num); i++)
	{
		if (num[i]<'0' || num[i]>'9')
		{
			return 0;
		}
	}
	if (trans(num) == 0)
		return 0;
//	printf("----\n");
	return 1;
}
int trans(char num[])
{
	int sum = 0;
	double i;
	for (i = strlen(num)-1; i >= 0; i--)
	{
		int io = (int)i;
		sum += (num[io]-'0')*pow(10, strlen(num)-i-1);
	}
	return sum;
}
*/