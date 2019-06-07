/*一个整数“犯二的程度”定义为该数字中包含2的个数与其位数的比值。
如果这个数是负数，则程度增加0.5倍；如果还是个偶数，则再增加1倍。例如数字-13142223336是个11位数，
其中有3个2，并且是负数，也是偶数，则它的犯二程度计算为：3/11×1.5×2×100%，约为81.82%。
本题就请你计算一个给定整数到底有多二*/
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