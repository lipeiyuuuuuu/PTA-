/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sort(int a[], int n);
#define MAXN 10
int main()
{
	int i, n;
	int a[MAXN];

	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);

	sort(a, n);
	printf("After sorted the array is:");
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
void sort(int a[], int n)
{
	int i, j;
	int imax;
	for (i = n; i>1; i--)
	{
		imax = 0;
		for (j = 0; j < i; j++)
		{
			if (a[imax]<a[j])
			imax = j;
		}
		int t;
		t = a[i-1];
		a[i-1] = a[imax];
		a[imax] = t;
	}
	}*/