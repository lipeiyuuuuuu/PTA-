/*


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double sum_(double n);
int main()
{
	double n, m, sum=0;
	scanf("%lf%lf",&m,&n);
	double i;
	for (i = m; i <= n; i++)
		sum += sum_(i); 
	printf("sun = %.6f", sum);
	system("pause");
	return 0;
}
double sum_(double n)
{
	double result;
	result = pow(n, 2) + 1.0 / n;
//	printf("%")
	return result;
}


*/