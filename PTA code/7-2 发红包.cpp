/*7-2 �����* ��10 �֣�
ĳ��ҵ���հ�Ա��ҵ�����������֪���������ֻ�м���Ԫ��
�����д���򣬰�������Ա���ݽ���������װ���������ٵ�ֽ�ҡ�
ע��ֽ�����Ϊ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��2Ԫ��1Ԫ��
�����ʽ
���(��ԪΪ��λ������)
�����ʽ
����Ʊ����ɴ�С��˳��������ֳ�Ʊ������(�μ��������)
��������
582
�������
100Ԫ: 5��
 50Ԫ: 1��
 20Ԫ: 1��
 10Ԫ: 1��
  5Ԫ: 0��
  2Ԫ: 1��
  1Ԫ: 0��*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int yb, ws, es, sk, wk, lk, yk;
	int sum;
	scanf("%d",&sum);
	yb = sum / 100;
	sum = sum - 100 * yb;
	ws = sum / 50;
	sum = sum - 50 * ws;
	es = sum / 20;
	sum = sum - 20 * es;
	sk = sum / 10;
	sum = sum - 10 * sk;
	wk = sum / 5;
	sum = sum - 5 * wk;
	lk = sum / 2;
	sum = sum - 2 * lk;
	yk = sum;
	printf("100Ԫ:%2d��\n 50Ԫ:%2d��\n 20Ԫ:%2d��\n 10Ԫ:%2d��\n  5Ԫ:%2d��\n  2Ԫ:%2d��\n  1Ԫ:%2d��",yb,ws,es,sk,wk,lk,yk);
	system("pause");
	return 0;
}
*/