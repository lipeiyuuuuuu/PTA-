/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char thisman;
	char i='a';
	int sum = 0, n, flag = 0;
	scanf("%d", &n);
	for (i = 'a'; i <= 'f'; i++)
	{
		sum = (i != 'a') + (i == 'c') + (i == 'd') + (i != 'd') + (i == 'c' || i == 'e') + (i != 'd'&&i != 'e');//与说的话相匹配
		if (sum == n&&flag==0)
		{
			printf("%c",i-32);
			flag =1;
		}
		else if (sum == n)
		{
			printf(" or %c", i-32);
		}
	}
	if (flag == 0)
		printf("Error");
	system("pause");
	return 0;
}*/