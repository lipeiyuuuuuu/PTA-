/*һ�������������ĳ̶ȡ�����Ϊ�������а���2�ĸ�������λ���ı�ֵ��
���������Ǹ�������̶�����0.5����������Ǹ�ż������������1������������-13142223336�Ǹ�11λ����
������3��2�������Ǹ�����Ҳ��ż���������ķ����̶ȼ���Ϊ��3/11��1.5��2��100%��ԼΪ81.82%��
������������һ���������������ж��*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 52
int main()
{
	
	char num[N];
	gets(num);
	int digs,no2=0,i=0; //number of 2  , Positive and negative
	double pan = 1;
	digs = strlen(num);
	int oae = 1; 
	if (num[digs - 1] % 2 == 0)
		oae = 2;
//	int pan=1; //Positive and negative
	if (num[0] == '-')
	{
		pan = 1.5;
		i = 1;
		digs--;
		
	}
	do 
	{
		if (num[i] == '2')
			no2++;
		i++;
	} while (num[i] != '\0');
	double  how2;
	if (digs != 0)
		how2 = pan*(no2*1.0/digs)*oae * 100;
	printf("%.2lf%%", how2 );
	system("pause");
	return 0;
}*/