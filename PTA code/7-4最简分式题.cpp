/*7-4 Լ������ʽ ��15 �֣�
�������Ա�ʾΪ����/��ĸ����ʽ����дһ������Ҫ���û�����һ��������Ȼ����Լ��Ϊ����ʽ������ʽ��ָ���Ӻͷ�ĸ�����п���Լ�ֵĳɷ��ˡ�
��6/12���Ա�Լ��Ϊ1/2�������Ӵ��ڷ�ĸʱ������Ҫ���Ϊ�����ַ�������ʽ����11/8����11/8���������ӷ�ĸ���ʱ����Ȼ���Ϊ1/1�ķ�����ʽ��
�����ʽ��
������һ���и���һ�����������Ӻͷ�ĸ�м���б��/�ָ����磺12/34��ʾ34��֮12�����Ӻͷ�ĸ������������������0�����������������Ķ���Ļ�����
��ʾ����scanf�ĸ�ʽ�ַ����м���/����scanf���������б�ܡ�
�����ʽ��
��һ����������������Ӧ������ʽ����ʽ���������ͬ�������÷���/��ĸ����ʽ��ʾ�������� 5/6��ʾ6��֮5��
����������66/120���������11/20*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int max_factor(int n, int m);
int min_2(int a, int b);
int max_2(int a, int b);
int main()
{
	int fm, fz;
	scanf("%d/%d", &fz, &fm);
	int t=max_factor(fz, fm);;
		fz = fz / t;
		fm = fm / t;
	printf("%d/%d", fz, fm);
	system("pause");
	return 0;
}
int max_factor(int n, int m)
{
	int r,t;
	do
	{
		r = max_2(n, m)% min_2(m, n);
		m = min_2(m, n);
		n = r;
	} while (r != 0);
	return m;
}
int min_2(int a, int b)
{
	if (a >= b)
		return b;
	return a;
}
int max_2(int a, int b)
{
	if (a >= b)
		return a;
	return b;
}
*/