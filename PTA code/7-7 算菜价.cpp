/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct caijia
{
	char name[20];
	int num;
	double per;
};
int main()
{
	struct caijia one;
	double total;
	printf("--=-");
	scanf("%s%d%lf\n", one.name, &one.num, &one.per);
	puts(one.name);
	getchar();
	total = (int)(one.num * one.per * 10 + 0.5);
	while(1)
	{
		printf("---");
		scanf("%s", one.name);
		puts(one.name);
		if (strcmp(one.name, "\0"))
			break;
		scanf("%d%lf\n", &one.num, &one.per);
		total += (int)(one.num * one.per * 10 + 0.5);
		printf("%.1lf --%s\n", total / 10,one.name);
		int 
//		getchar();
	}
//	printf("%.1lf", total / 10);
	system("pause");
	return 0;
}





*/



































