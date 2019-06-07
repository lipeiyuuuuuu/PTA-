/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 0.01
double F(double x, double a3, double a2, double a1, double a0);
int main()
{
	
	double a, b, mid, a0, a1, a2, a3, *p0, *p1, *p2, *p3;
	scanf("%lf%lf%lf%lf%lf%lf", &a3, &a2, &a1, &a0, &a, &b);
	p0 =&a0 ,p1 =&a1 , p2 =&a2 ,p3 =&a3 ;
	while (1)
	{
		mid = (a + b) / 2;
		if (F(a, a3, a2, a1, a0) == 0)
		{
			printf("%.2lf", a);
			break;
		}
		else if (F(b, a3, a2, a1, a0) == 0)
		{
			printf("%.2lf", b);
			break;
		}
		else if (F(mid, a3, a2, a1, a0) == 0)
		{
			printf("%.2lf", mid);
			break;
		}
		else if (b - a < EPS)
		{
			printf("%.2lf", mid);
			break;
		}
		else if (F(a, a3, a2, a1, a0)*F(mid, a3, a2, a1, a0) < 0)
		{
			b = mid;
		}
		else
		{
			a = mid;
		}
	}
	system("pause");
	return 0;
}
double F(double x,double a3,double a2,double a1,double a0)
{
	double result;
	result = a3*pow(x, 3) + a2*pow(x, 2) + a1*pow(x, 1) + a0;
	return result;
}


*/