/*7 - 5 编程打印空心字符菱形 （10 分）
本题目要求读入菱形起始字母和菱形的高度，然后输出空心字符菱形。
所谓“空心菱形”是指：每行由两端为字母、中间为空格的字符串构成，
每行的字符串中心对齐；上半部分相邻两行字符串长度差2，
且字母从给定的起始字母逐一递增；下半部分与上半部分对称。
输入格式 :输入在一行中给出起始字母（范围为英文大写字母A - G）
和菱形的高度（为不超过10的奇数）。输出格式 :输出空心字符菱形。
输入样例 :B 5输出样例 :
	 B
	C C
   D   D
    C C
	 B
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int n, i, j, k;
	scanf("%c %d", &c, &n);
	int t = c;
	for (i = 1; i <= (n+1) / 2;i++)//循环一次输出一行（上半部分）
	{
		int kj1,kj2;
		k = (n + 1) / 2 - i;
		for (kj1 = 1; kj1 <= k; kj1++)//空格
		{
			printf(" ");
		}
		if (i != 1)
		{
			printf("%c", t + i - 1);//字母
		}
		for (kj2 = 1; kj2 <= i * 2 - 3; kj2++)//空格
		{
			printf(" ");
		}
		printf("%c", t + i - 1);//字母
		printf("\n");
	}
//////////////////---------------------------------------
	for (i = (n+1)/2+1; i <= n; i++)//循环一次输出一行（下半部分）
	{
		int kj1, kj2;
		k = i-(n + 1) / 2 ;
		for (kj1 = 1; kj1 <= k; kj1++)//空格
		{
			printf(" ");
		}
		if (i != n)
		{
			printf("%c", t + n-i);//字母*********
		}
		for (kj2 = 1; kj2 <= (n-i)*2-1; kj2++)//空格
		{
			printf(" ");
		}
		printf("%c", t + n - i);//字母*********
		printf("\n");
	}
//	printf("")
	system("pause");
	return 0;
}
*/