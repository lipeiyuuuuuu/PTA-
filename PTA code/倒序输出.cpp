/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#include<math.h>
int reverse(int number);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", reverse(n));
	system("pause");
	return 0;
}
int reverse(int n)
{
	int flag = 1;
	if (n > 0)
		flag = 1;
	else if (n == 0)
		flag = 0;
	else
		flag = -1;//ji suan fu hao
		n = n*flag;// n wei zheng shu 
		if (n == 0)
			return n;
		else
		{
step:       if (n % 10 == 0)
			{
					 n = n / 10;
					 goto step;
			}
				 else;
		}
	 int a[101],i=0;
	 do
	 {
		 a[i] = n % 10;
		 n=n / 10;
		 i++;
	 } while (n != 0);
	 int k;
	 int sum=0;
	 for (k = 0; k < i; k++)
	 {
		 sum = (sum * 10 + a[k]);
	 }
	 sum = sum*flag;
	 return sum;
}*/