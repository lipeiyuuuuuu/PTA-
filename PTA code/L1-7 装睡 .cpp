/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char name[4];
	scanf("%d", &n);
	int i;
	int h, m;
	for (i = 0; i < n; i++)
	{
		scanf("%s%d%d\n", name, &h, &m);
		if ((h > 20 || h < 15) || (m > 70 || m < 50))
		{
			printf("%s\n", name);
		}
	}
	system("pause");
	return 0;
}

*/