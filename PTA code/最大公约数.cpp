/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#include<math.h>
int gcd(int x, int y);
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
	system("pause");
	return 0;
}
int gcd(int x, int y)   geng xiang jian suan shu
{
	int t;
	do
	{
		if (x > y)
		{
			t = x;
			x = y;
			y = t;
		}
		y = y % x;
		
	} while (x != y);
	return y;
}
int gcd(int x, int y)//zhan zhuan xiang chu
{
	int t;
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	do
	{
		t = y%x;
		y = x;
		x = t;
	} while (t!= 0);
	return y;
}*/
