/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 51
#define M 9
int main()
{
	int n;
	scanf("%d", &n);
	char name[N][M];
	int sex[N];
	int i,j;
	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &sex[i], &name[i]);//shi fou yao qu diao qu zhi fu
	}
	for (i = 0; i < n / 2; i++)
	{
		for (j = n-1; j >= n/2; j--)
		{
			if (sex[i] != sex[j] && sex[j] != 3&&sex[i]!=3)
			{
				printf("%s %s\n", name[i], name[j]);
				sex[j] = 3;
				sex[i] == 3;
				break;
			}
		}
	}
	system("pause");
	return 0;
}
*/

/*-------------------------结构体数组储存------------------*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 51
typedef struct _STUDENT{
	int xb;
	char name[10];
}STU;
int main()
{
	int n;
	scanf("%d", &n);
	STU stu[N];
	int i, j;
	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &stu[i].xb, stu[i].name);
	}
	for (i = 0; i < n / 2; i++)	{
		for (j = n - 1; j >= n / 2; j--){
			if (stu[i].xb != stu[j].xb && stu[j].xb != 3 && stu[i].xb != 3)	{
				printf("%s %s\n", stu[i].name, stu[j].name);
				stu[j].xb = 3;
				stu[i].xb = 3;
				break;
			}
		}
	}
	system("pause");
	return 0;
}

*/