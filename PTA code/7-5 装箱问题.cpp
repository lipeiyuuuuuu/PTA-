/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1010
int main()
{
	int n,i;
	scanf("%d",&n);
	int thing[N];
	int box[N] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &thing[i]);
	}
	int j;
	int j_max=0;
	for (i = 0; i < n; i++)//循环一次放一个物品
	{
		for (j = 0; j < n; j++)
		{
			if (100 - box[j] >= thing[i])
			{
				if (j>j_max)
					j_max = j;
				printf("%d %d\n", thing[i], j+1);
				box[j] = box[j] + thing[i];
				break;
			}
		}
	}
	printf("%d", j_max+1);
	system("pause");
	return 0;
}


*/