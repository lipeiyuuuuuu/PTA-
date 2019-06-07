/*
7-2 求一批整数中出现最多的个位数字 （20 分）
给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。
输入格式：
输入在第1行中给出正整数N（≤1000），在第二行中给出N个不超过整型范围的非负整数，数字间以空格分隔。
输出格式：
在一行中按格式“M: n1 n2 ...”输出，其中M是最大次数，n1、n2、……为出现次数最多的个位数字，按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。
输入样例：
3
1234 2345 3456
输出样例：
3: 3 4*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#define N 1010
void numbertimes(int n, int numbertimes[]);
int main()
{
	int n;
	int i;
	int allnumber[N];
	scanf("%d", &n);
	int ntimes[10] = { 0 };// ntimes n chu xian de  ci shu
	for (i = 0; i<n; i++)
	{
		scanf("%d", &allnumber[i]);
	}
	for(i = 0; i<n; i++)
	{
		numbertimes(allnumber[i], ntimes);
	}
	int imax=0;
	for (i = 0; i<10; i++)
	{
		if (ntimes[imax] < ntimes[i])
			imax = i;
	}
	printf("%d:", ntimes[imax]);
	for (i = 0; i < 10; i++)
	{
		if (ntimes[imax] == ntimes[i])
		{
			printf(" %d", i);
		}
	}
	system("pause");
	return 0;
}
void numbertimes(int n, int ntimes[])
{
	int i;
	do
	{
		i = n % 10;
		ntimes[i]++;
		n = n / 10;
	} while (n != 0);
}
*/