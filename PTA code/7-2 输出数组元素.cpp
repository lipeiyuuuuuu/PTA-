/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 11
int main()
{
	int a[N];
	int n;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i <n - 1; i++)
	{
		a[i] = a[i + 1] - a[i];
	}
	i = 0;
	do
	{
		printf("%d", a[i]);
		i++;
		if (i + 2>n) break;
		printf(" ");
		printf("%d", a[i]);
		i++;
		if (i + 2>n) break;
		printf(" ");
		printf("%d", a[i]);
		i++;
		printf("\n");
		if (i + 2>n) break;
	} while (1);
	system("pause");
	return 0;
}*/
/*11
5 1 7 14 6 36 4 28 50 100 546 */
/*12
5 1 7 14 6 36 4 28 50 100 546 231*/
/*13
5 1 7 14 6 36 4 28 50 100 546 231 87*/