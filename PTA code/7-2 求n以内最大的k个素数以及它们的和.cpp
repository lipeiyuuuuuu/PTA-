/*����Ҫ����㲢���������n������k�������Լ����ǵĺ͡�
�����ʽ:
������һ���и���n(10��n��10000)��k(1��k��10)��ֵ��
�����ʽ:
��һ���а����и�ʽ���: ����1+����2+��+����k=�ܺ�ֵ
�����������ݼ�˳���������n���ڲ���k����������ʵ�ʸ��������
��������1:1000 10
�������1:997+991+983+977+971+967+953+947+941+937=9664
��������2:12 6
�������2:11+7+5+3+2=28*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int judge(int n);
int main()
{
	int n, k, i, sum = 0;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= k - 1 && n>2;)
	{
		if (judge(n))
		{
			printf("%d+", n);
			sum += n;
			i++;
		}
		n--;
	}
	do
	{
		if (judge(n))
		{
			printf("%d=%d", n, sum + n);
			break;
		}
		n--;
	} while (n >= 2);
	system("pause");
	return 0;
}
int judge(int n)
{
	int i;
	if (n == 0 || n == 1)
		return 0;
	for (i = 2; i <= sqrt((double)n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}

*/