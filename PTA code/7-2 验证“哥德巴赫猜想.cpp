/*��ѧ���������ġ���°ͺղ��롱�Ĵ�����˼�ǣ��κ�һ������2��ż�����ܱ�ʾΪ��������֮�͡����磺24=5+19��
����5��19������������ʵ������������һ��������֤20�����ڵ�ż�������Էֽ����������֮�͡�
�����ʽ��
������һ���и���һ��(2, 2 000 000 000]��Χ�ڵ�ż��N��
�����ʽ��
��һ���а��ո�ʽ��N = p + q�����N�������ֽ⣬����p �� q��Ϊ����������Ϊ�����ķֽⲻΨһ
������24�����Էֽ�Ϊ7+17����Ҫ�����������н���p��С�Ľ⡣*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int judge_prime(long int n);
int main()
{
	long int x,b,s,i;//b �ϴ���Ǹ���  ��sС���Ǹ���
	scanf("%ld", &x);
//	long int i = 1;
	for (i = 2; i <= x/2; i++)
	{
		if (judge_prime(i) && judge_prime(x - i))
		{
//			printf("================\n");
			s = i;
			b = x - i;
			break;
		}
		
	}
	printf("%ld = %ld + %ld", x, s, b);
	system("pause");
	return 0;
}
int judge_prime(long int n)
{
	long int i;
	double x = (double)n;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}*/
