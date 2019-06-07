/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n, th[101] = { 0 }, number, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &number);
		th[number]++;
	}
	int flag=1,lp=0;
	do
	{
		for (i = flag; i < 99; i++)
		{
			if (th[i] > 0 && th[i + 1] > 0&& th[i + 2]>0)
			{
				th[i]--;
				th[i+1]--;
				th[i+2]--;
				lp++;
				flag = i;
				break;

			}
		//	printf("----%d\n",i);
		}
	} while (i != 99);
	printf("%d", lp);
	system("pause");
	return 0;
}

*/