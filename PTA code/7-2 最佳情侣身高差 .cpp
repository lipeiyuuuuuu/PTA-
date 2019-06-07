
////da按正确
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct gao
{
	char sex;
	double alt;
};
int main()
{
	struct gao s[11];
	int i, n;
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{		
		scanf("%c %lf", &s[i].sex, &s[i].alt);
		getchar();
	}
	for (i = 0; i < n; i++)
	{
		if (s[i].sex == 'M')
		{
			printf("%.2lf\n", s[i].alt / 1.09);
		}
		else
		{
			printf("%.2lf\n", s[i].alt * 1.09);
		}
	}
	system("pause");
	return 0;
}

*/

// 答案错误
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct gao
{
	char sex;
	double alt;
};
int main()
{
	struct gao s[11];
	int i, n;
	scanf("%d\n", &n);

	printf(" %d \n", n);
	for (i = 0; i < n; i++)
	{
		printf("--%d--", i);
		scanf("%c %lf\n", &s[i].sex, &s[i].alt);
		//		printf("\n---%c %.2lf -----\n", s[i].sex, s[i].alt);
	}
	for (i = 0; i < n; i++)
	{
		if (s[i].sex == 'M')
		{
			printf("%.2lf\n", s[i].alt / 1.09);
		}
		else
		{
			printf("%.2lf\n", s[i].alt * 1.09);
		}
	}
	system("pause");
	return 0;
}
*/