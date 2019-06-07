
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
int main()
{
	int n,i;
	char name[N][N];
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		gets(name[i]);
//		puts(name[i]);
		if (strcmp(name[i], "\n")==0)
			i--;
//		getchar();
	}
	for (i = 0; i < n; i++)
	{
		puts(name[i]);
//		printf("\n");
	}
	system("pause");
	return 0;
}
