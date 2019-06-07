/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int min(int n); 
int max(int n);
int main()
{
	int No = 1;
	int x;
	scanf("%d", &x);
	do
	{
		printf("%d: %d - %d = %d\n", No, max(x), min(x), max(x) - min(x));
		No++;
		x = max(x) - min(x);
	} while (x!=495);
	system("pause");
	return 0;
}
int max(int n)
{
	int a, b, c,t;
	a = n % 10;
	b = n /10% 10;
	c = n/100 % 10;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a<c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c =t;
	}
	return a * 100 + b * 10 + c;
}
int min(int n)
{
	int a, b, c,t;
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100 % 10;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a<c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	return c * 100 + b * 10 + a;
}*/