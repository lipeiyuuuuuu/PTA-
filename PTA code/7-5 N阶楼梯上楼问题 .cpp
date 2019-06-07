/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n,jishu1=1,jishu2=2,t,result,i;
	scanf("%d", &n);
	if (n==1)
		printf("1");
	else if (n == 2)
		printf("2");
	else
	{
		for (i = 1; i <= n - 2; i++)
		{
			result = jishu1 + jishu2;
			jishu1 = jishu2;
			jishu2 = result;
		}
		printf("%d", result);
	}	
	system("pause");
	return 0;
}

*/