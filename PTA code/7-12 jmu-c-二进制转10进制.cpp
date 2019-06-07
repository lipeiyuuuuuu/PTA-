/*


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 1000
int pow2(int j, int  n);
int main()
{
	char num[N];
	gets(num);
	int sum = 0, flag = 0;
	int  i=0,t=strlen(num)-1;
	do
	{
		sum += (num[i] - 48)*pow2(2, t);
		if (num[i] - 48 > 1)
		{
			flag = 1;
		}
		i++;
		t--;
	} while (num[i] != '\0');
	if (flag)
		printf("error input!");
	else
	printf("%d", sum);
system("pause");
return 0;
}
int pow2(int j,int  n)
{
	int total=1;
	int i;
	for (i = 1; i <= n; i++)
	{
		total *= j;
	}
	return total;
}
*/