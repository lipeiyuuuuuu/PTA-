/*



#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 200
int judge_zishou(unsigned long int n);
int main()
{
int n, i;
unsigned long int num[N];
scanf("%d", &n);
for (i = 0; i < n; i++)
{
scanf("%ld", &num[i]);
}
for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", judge_zishou(num[i]));
else
printf(" %d", judge_zishou(num[i]));
}
system("pause");
return 0;
}
#include<stdlib.h>
#include<stdio.h>
#define N 200
int judge_zishou(unsigned long int n);
int main()
{
	int n, i;
	unsigned long int num[N];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", judge_zishou(num[i]));
		else
			printf(" %d", judge_zishou(num[i]));
	}
	system("pause");
	return 0;
}


int judge_zishou(unsigned long int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	int count = 2;
	unsigned long mul, number, k, a, b, mo;
	for (number = 1; number <= n; number++)
	{
		mo = number % 10;
		if (mo == 1 || mo == 2 || mo == 3 || mo == 4 || mo == 7 || mo == 8 || mo == 9)
			continue;
		for (mul = number, k = 1; (mul /= 10)>0; k *= 10);  
		a = k * 10;
		mul = 0;
		b = 10;
		while (k>0)
		{
			mul = (mul + (number % (k * 10))*(number%b - number % (b / 10))) % a;
			k /= 10;
			b *= 10;
		}
		if (number == mul)
		{
			count++;
		}
	}
	return count;
}


*/


/*
	
	int judge_zishou(unsigned long int n)
	{
	if (n == 0)
	return 1;
	if (n == 1)
	return 2;
	//������ƹ��� ����ƽ���Ĺ��̣���Ϊ̫�������ƽ�������˷�Χ��//count n���ڵ�����������
	int count = 2;
	unsigned long mul, number, k, a, b, mo;
	for (number = 1; number<=n; number++)
	{
	mo = number % 10;
	if (mo == 1 || mo == 2 || mo == 3 || mo == 4 || mo == 7 || mo == 8 || mo == 9)//ģ��Ϊ��Щ��  һ������������ 1 ���������������Ѿ��ж�
	continue;
	for (mul = number, k = 1; (mul /= 10)>0; k *= 10) ;   //��number��ֵ��mul  ��mulȥ�õ�number��λ��
	//k�õ���ֵΪmul����number��Ȩ����λ����,���ں������ֵĽ�ȡ  ���� number Ϊ11  ��kΪ10
	a = k * 10;//a ΪȨ����ʮ��
	mul = 0;
	b = 10;
//	printf("\n-------------------------------------------------\n");
	while (k>0)//ģ��˷���λ���
	{
	mul = (   mul +      (          number % (k * 10)  )*(   number%b - number % (b / 10)  )         ) % a;//a=k*10
	//     ��һ�ε�ǰ��λ
	//       ��ʼΪ0 mul          ȡnumber�ĺ�lgk+1λ   ȡ��number���ض�λ  ����lgbλ������b����㣩  ģ����number��Ȩ����ʮ����ȡ��β��
//	printf("%d\t %d\t %d\t %d\t\n", mul, k, b, number);
	k /= 10;
	b *= 10;
	//ģ��˷�  ֻ����Ȩ��֮�ڵ�  ֮�����Ӱ��
	//����number = 9376
	//                    9  3  7  6     ----
	//               x    9  3  7  6     ----
	//  ---------------------------------
	//	      ����     5  6  2  5  6     ----9376*6       ȡǰ��λ
	// 	      ����     5  6  3  2        ----9376*7*10    ȡǰ��λ
	//-----------------------------------
	//	      ���� 7   1  2  5  7  6     ----
	//        ���� 8   1  2  8			 ----9376*3*100   ȡǰ��λ
	//-----------------------------------
	//	      ����  5  2  5  3  7  6     ----
	//	      ����  3  8  4			     ----9376*9*1000  ȡǰ��λ
	//-----------------------------------
	//	      ����  ����  9  3  7  6     ----             ȡǰ��λ
	}
	//���ĵ���mul��  number^2 ��  ��number��ͬλ����β��
	if (number == mul)
	{
	count++;
//	printf("\n--------------------yes---------------------------------------------------yes\n");
	//system("pause");
	}
	else
	{
//	printf("\n--------------------no----------------------------\n");
	}
	}
	return count;
	}


	*/