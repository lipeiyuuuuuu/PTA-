/*7-1 ������A+B ��15 �֣�
���Ŀ��ܼ򵥣�����������������A��B�ĺͣ�����A��B��������[1,1000]����΢�е��鷳���ǣ����벢����֤��������������
�����ʽ��
������һ�и���A��B������Կո�ֿ���������A��B��һ��������Ҫ�������������ʱ������ǳ�����Χ�����֡���������С�����ʵ����������һ�����롣
ע�⣺���ǰ������г��ֵĵ�1���ո���Ϊ��A��B�ķָ�����Ŀ��֤���ٴ���һ���ո񣬲���B����һ�����ַ�����
�����ʽ��
��������ȷ���������������򰴸�ʽA + B = ����������ĳ�����벻��Ҫ��������Ӧλ�����?����Ȼ��ʱ��Ҳ��?��
��������1��
123 456
�������1��
123 + 456 = 579
��������2��
22. 18
�������2��
? + 18 = ?
��������3��
-100 blabla bla...33
�������3��
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