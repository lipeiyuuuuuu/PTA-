/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	char num[8] = {0};
	scanf("%d", &n);
	int i=7;
	while (n != 0&&i>=0)
	{
		num[i] = n % 2;
		n = n / 2;
		i--;
	}
	printf("%d", (num[0]*8 + num[1]*4 + num[2]*2 + num[3]) * 10 + (num[4]*8 + num[5]*4 + num[6]*2 + num[7]));
	system("pause");
	return 0;
}

*/