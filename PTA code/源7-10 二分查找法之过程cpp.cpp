/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 12
int check(int num[],int n);
int main()
{
	int n, target,a,b,mid,i;
	scanf("%d %d\n", &n, &target);
	a = 0, b = n - 1;
	int num[N];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	int flag = 1;
	if (check(num,n))
	{
		while (a<=b)
		{
			mid = (a + b) / 2;
			printf("[%d,%d][%d]\n", a, b, mid);
			if (num[a]==target)
			{
				printf("%d", a);
				flag = 0;
				break;
			}
			else if (num[b] == target)
			{
				printf("%d", b);
				flag = 0;
				break;
			}
			else if(num[mid] == target)
			{
				printf("%d", mid);
				flag = 0;;
				break;
			}
			else if (target > num[mid])
			{
				a = mid + 1;
			}
			else if (target < num[mid])
			{
				b = mid - 1;
			}
			
//		system("pause");
		}
		if (flag)
		{
			printf("Not Found");
		}
	}
	else
		printf("Invalid Value");
	system("pause");
	return 0;
}
int check(int num[],int n)//升序排列返回一   否则返回零
{
	int i;
	for (i = 0; i < n - 2; i++)
	{
		if (num[i] >= num[i + 1])
			return 0;
	}
	return 1;
}


*/