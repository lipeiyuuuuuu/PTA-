/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int anti(char n[]);
int anti2(int n);
int main()
{
	int n, i;
	scanf("%d", &n);
	int  at;
	char a[100], b[100];
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", &a, &b);
		at = anti(a) + anti(b);
		printf("%d\n", anti2(at));
	}
	system("pause");
	return 0;
}
int anti(char n[])
{
	int l=strlen(n);
	int anti=0,i;
	for (i =l - 1; i >= 0; i--)
	{
		anti = anti * 10 + (n[i]-'0');
	}
//	printf("---%d----\n", anti);
	return anti;
}
int anti2(int n)
{
	int r;
	int anti=0;
	while (n != 0)
	{
		r = n % 10;
		anti = anti * 10 + r;
		n /= 10;
		if (n==0)
		return anti;
	}
	return 0;
}

*/