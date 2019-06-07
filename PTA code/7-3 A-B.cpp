/*本题要求你计算A−B。不过麻烦的是，A和B都是字符串 —— 即从字符串A中把字符串B所包含的字符全删掉，
剩下的字符组成的就是字符串A−B。
输入格式：
输入在2行中先后给出字符串A和B。两字符串的长度都不超过10
​4
​​，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。
输出格式：
在一行中打印出A−B的结果字符串。
输入样例：
I love GPLT!  It's a fun game!
aeiou
输出样例：
I lv GPLT!  It's  fn gm!*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100005
void  del(int n, char a[]);
int main()
{
	char a[N], b[N];
	gets(a);
	//getchar();
	gets(b);
	//puts(b);
	//printf("------------\n");
	int lena, lenb;
	lena = strlen(a);
	lenb = strlen(b);
	int i,j;
	for (i = 0; i < lena; i++)
	{
		for (j = 0; j < lenb; j++)
		{
			if (a[i] == b[j])
			{
				del(i, a);
				lena--;
			}
		}
	}
	puts(a);
	system("pause");
	return 0;
}
void  del(int n, char a[])
{
	int i,lena;
	lena= strlen(a);
	for (i = n; i < lena; i++)
	{
			a[i] = a[i + 1];
	}
}
*/