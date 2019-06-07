/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main3()

{
	int y, f, n, flage = 0;
	double yuan;
	scanf("%d", &n);
	for (f = 1; f <= 100; f++)
	for (y = 1; y <= 55; y++)
	{
		if ((98 * f - n) == (199 * y))
		{
			yuan = (y * 100 + f) / 100.0;
			printf("%.2lf", yuan);
			flage = 1;
		}
	}
	if (flage == 0)
		printf("No Solution");
	system("pause");
	return 0;
}*/