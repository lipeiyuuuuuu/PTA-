#include <stdio.h>
int factorsum(int number);
void PrintPN(int m, int n);
int main()
{
	int i, m, n;
	scanf("%d %d", &m, &n);
	if (factorsum(m) == m) printf("%d is a perfect number\n", m);
	if (factorsum(n) == n) printf("%d is a perfect number\n", n);
	PrintPN(m, n);
	return 0;
}
int factorsum(int number)
{
	if (number == 1)
		return 1;
	int sum = 0,i=1;
	//printf("-----------------\n");
	while (i<=number/2)
	{
		if (number % i == 0)
		{
			//printf("*********%d\n",i);
			sum += i;
		}
		i++;
	}
	if (sum == number)
		return sum;
	else
		return 0;
}
void PrintPN(int m, int n)
{
	int i;
	for (m; m <= n; m++)
	{
		if (factorsum(m)==m)
		{
			printf("%d = 1",m);
			for (i = 2; i <= m / 2; i++)
			{
				if (m % i == 0)
					printf(" + %d", i);
			}
			printf("\n");
		}
	}
	return;
}