/*
7-2 ��һ�������г������ĸ�λ���� ��20 �֣�
����һ������������ÿ��������ÿһλ���֣�����ִ������ĸ�λ���֡��������3������1234��2345��3456�����г�����������������3��4����������3�Ρ�
�����ʽ��
�����ڵ�1���и���������N����1000�����ڵڶ����и���N�����������ͷ�Χ�ķǸ����������ּ��Կո�ָ���
�����ʽ��
��һ���а���ʽ��M: n1 n2 ...�����������M����������n1��n2������Ϊ���ִ������ĸ�λ���֣�����С�����˳�����С����ּ��Կո�ָ�����ĩβ�����ж���ո�
����������
3
1234 2345 3456
���������
3: 3 4*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#define N 1010
void numbertimes(int n, int numbertimes[]);
int main()
{
	int n;
	int i;
	int allnumber[N];
	scanf("%d", &n);
	int ntimes[10] = { 0 };// ntimes n chu xian de  ci shu
	for (i = 0; i<n; i++)
	{
		scanf("%d", &allnumber[i]);
	}
	for(i = 0; i<n; i++)
	{
		numbertimes(allnumber[i], ntimes);
	}
	int imax=0;
	for (i = 0; i<10; i++)
	{
		if (ntimes[imax] < ntimes[i])
			imax = i;
	}
	printf("%d:", ntimes[imax]);
	for (i = 0; i < 10; i++)
	{
		if (ntimes[imax] == ntimes[i])
		{
			printf(" %d", i);
		}
	}
	system("pause");
	return 0;
}
void numbertimes(int n, int ntimes[])
{
	int i;
	do
	{
		i = n % 10;
		ntimes[i]++;
		n = n / 10;
	} while (n != 0);
}
*/