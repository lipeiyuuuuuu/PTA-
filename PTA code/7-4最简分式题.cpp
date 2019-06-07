/*7-4 约分最简分式 （15 分）
分数可以表示为分子/分母的形式。编写一个程序，要求用户输入一个分数，然后将其约分为最简分式。最简分式是指分子和分母不具有可以约分的成分了。
如6/12可以被约分为1/2。当分子大于分母时，不需要表达为整数又分数的形式，即11/8还是11/8；而当分子分母相等时，仍然表达为1/1的分数形式。
输入格式：
输入在一行中给出一个分数，分子和分母中间以斜杠/分隔，如：12/34表示34分之12。分子和分母都是正整数（不包含0，如果不清楚正整数的定义的话）。
提示：在scanf的格式字符串中加入/，让scanf来处理这个斜杠。
输出格式：
在一行中输出这个分数对应的最简分式，格式与输入的相同，即采用分子/分母的形式表示分数。如 5/6表示6分之5。
输入样例：66/120输出样例：11/20*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int max_factor(int n, int m);
int min_2(int a, int b);
int max_2(int a, int b);
int main()
{
	int fm, fz;
	scanf("%d/%d", &fz, &fm);
	int t=max_factor(fz, fm);;
		fz = fz / t;
		fm = fm / t;
	printf("%d/%d", fz, fm);
	system("pause");
	return 0;
}
int max_factor(int n, int m)
{
	int r,t;
	do
	{
		r = max_2(n, m)% min_2(m, n);
		m = min_2(m, n);
		n = r;
	} while (r != 0);
	return m;
}
int min_2(int a, int b)
{
	if (a >= b)
		return b;
	return a;
}
int max_2(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
*/