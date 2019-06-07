
/*


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#define MAXN 10
void f(long int x, char *p);
int main()
{
	long int x;
	char s[MAXN] = "";
	scanf("%ld", &x);
	f(x, s);
	printf("%s\n", s);
	system("pause");
	return 0;
}
void f(long int x, char *p)
{

	int i = 0, ys, n, j = 0;
	char t;

	if (x == 0)
	{
		*p = '0';
		return ;
	}
	if (x<0)
	{
		*p = '-';
		i++;
		x = -x;
	}
	while (x != 0)
	{
		ys = x % 16;
		if (ys<10)
			*(p + i) = '0' + ys;
		else
			*(p + i) = 'A' + ys - 10;
		x /= 16;
		i++;
	}
	*(p + i) = 0;
	n = i;
	if (*p == '-')
		j = 1;
	i = i - 1;
	for (; j<i; j++, i--)
	{
		t = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = t;
	}
}


*/