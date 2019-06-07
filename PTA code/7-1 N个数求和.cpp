//有错误以及运行超时情况    部分正确
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 202
int minmult(int n, int m);
int maxdivi(int n, int m);
int max(int m, int n);
int min(int m, int n);
int main()

{
	int N,i;
	scanf("%d", &N);
	int num[MAX],intger,fz,fm;
	for (i = 0; i < 2*N; i++)
	{
		scanf("%d/%d", &num[i], &num[i + 1]);
		i++;
	}
	int denom=1, numer=0;//fen mu fen zi
		for (i = 1; i <=2*N-1; i++)
		{
			denom = minmult(num[i],denom);//求分母最小公倍数
			i++;
		}
		for (i = 0; i <= 2*N-2; i++)
		{
			numer += (denom / num[i+1])*num[i];
			i++;
		}
		intger = numer / denom;
		fz = numer % denom;
		fm = denom;
		if (fz != 0)
		{
			int maxgys;//分子与分母的最大公约数
			maxgys = maxdivi(fz, fm);
			fz = fz / maxgys;
			fm = fm / maxgys;
		}
		if (intger == 0)
			printf("%d/%d", fz, fm);
		else if (fz == 0)
			printf("%d", intger);
		else
			printf("%d %d/%d",intger,fz,fm);
	system("pause");
	return 0;
}
int maxdivi(int n, int m)//最大公约数
{
	int r;
	do
	{
	r = max(n, m) % min(n, m);
		if (r == 0)
			return min(n, m);
		else
		{
			n = min(m, n);
			m = r;
		}
	} while (1);

}
int minmult(int n, int m)
{
	return (n*m) / maxdivi(n, m);
}
int max(int m,int  n)
{
	if (m > n)
		return m;
	else
		return n;
}
int min(int m,int n)
{
	if (m < n)
		return m;
	else
		return n;
}
*/