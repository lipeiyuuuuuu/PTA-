/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<stdio.h>
#define N 100010
#define M 1000 
#define T 100
int main()
{
	//t temp---��>judge panduan--->t temp-----> new_a       ||while(len_of_a<=n)
	long total;								//���������ָ���
	int sca[T];                             //��¼���������

	int t[T];								//�ݴ�����   ����>  b
	int len_of_t=0;                         //�´���a�����ָ���

	int a[N] = { 0 };						//�����ַ���
	long len_of_a = 0;

	int judge[M] = { 0 };					//�ж�����   ����>  a
	int len_of_judge=0;                     //�ж��еĸ���

	int prt[N] = { 0 };						//���ʱ��Ҫ������
	int stor[N] = { 0 };					// ���������t����  

	long i, j;								//��������

	long  num_of_1 = 0;                     //ͳ��1�ĸ���
//---------------����-------------------------
	scanf("%ld", &total);
	for (i = 0; i < total; i++)	{		scanf("%d", &sca[i]);	}
//----------------���Ĳ���--------------------
	a[0] = 1;
	long len_of_a = 1;//a �ĳ��ȼ������� 1
	len_of_judge = 1;
	len_of_t = 1;
	t[0] = 1;
	num_of_1++;
	int flag;//judge �жϱ�־
	do
	{
		for (i = 0; i < len_of_t; i++)//�� a�µõ�����  ����t��  ��t���Ƹ�judge
			judge[i] = t[i];
		len_of_judge = len_of_t;//��ʱjudge �� t ��ͬ    �� len_of_t ���� len_of_judge
		flag = t[len_of_t - 1];//  flag Ϊÿ���ж�ѭ������ʵ�ж�����

		len_of_t = 0;//��ʼ�� t�ĳ���
		j = 0;
		for (i = 0; i < len_of_judge; i++)
		{
			if (flag == 1)            //a ��ĩβΪ1
			{
				//���
				if (judge[i] == 1)//a����һ������
				{
					a[len_of_a++] = 2;
					t[len_of_t++] = 2;
					flag = 2;
				}
				else if (judge[i] == 2)//a������������
				{
					a[len_of_a++] = 2;
					t[len_of_t++] = 2;
					a[len_of_a++] = 2;
					t[len_of_t++] = 2;
					flag = 2;
				}
				else
				{
					printf("erro %d", flag);
					system("pause");
				}
			}
			//--------------------------------------------------
			else if (flag == 2)    //a ��ĩβΪ2 
			{
				//���
				if (judge[i] == 1)//a����һ������
				{
					a[len_of_a++] = 1;
					t[len_of_t++] = 1;
					flag = 1;
					num_of_1 += 1;
				}
				else if (judge[i] == 2)//a������������
				{
					a[len_of_a++] = 1;
					t[len_of_t++] = 1;
					a[len_of_a++] = 1;
					t[len_of_t++] = 1;
					flag = 1;
					num_of_1 += 2;
				}
				else
				{
					printf("erro %d", flag);
					system("pause");
				}
				//----------------------------------------------
			}
			else
			{
				printf("erro %d", flag);
				system("pause");
			}

		}

	} while (len_of_a <=   );
//---------------���-------------------------
	for (i = 0; i < total; i++)
	{
		printf("%d\n", prt[ sca[i] ]);
	}
	system("pause");
	return 0;
}

*/