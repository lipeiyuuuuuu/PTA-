/*
输入格式：
输入在一行中给出一个由11位数字组成的手机号码。
输出格式：
为输入的号码生成代码的前两行，其中arr中的数字必须按递减顺序给出。
输入样例：
18013820100
输出样例：
int[] arr = new int[]{8,3,2,1,0};
int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};*/
/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find_idex(int idex[], int n, int iidex);
#define T 10 //ten 0-9
#define PH 12//phone
int main()
{
	int num[T]={0,0,0,0,0,0,0,0,0,0};
	char ph[PH];
	int idex[T]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0},iidex=0;
	gets(ph);
	int i;
	for (i = 0; i < PH - 1; i++)
	{
		num[ph[i]-'0'] = 1;
	}
	printf("int[] arr = new int[]{");
	int no0=0;
	for (i = 9; i >= 0; i--)//ji lu you duo shao bu tong de zi mu
	{
		if (num[i])
			no0++;
	}
//	printf("%d\n", no0);
	for (i = 9; i>=0; i--)//shu chu bu tong zi shu ge shu  jian yi
	{
		if (num[i])
		{
			printf("%d,", i);
			no0--;
			num[i] = 0;
			idex[iidex] = i;
			iidex++;
		}
		if (no0 == 1)
			break;
	}
	i = 0;
	do
	{
		if (num[i] == 1)
		{
			printf("%d};", i);
			idex[iidex] = i;
			iidex++;
			break;
		}
		i++;
	} while (1);	

	i = 0;
	printf("\nint[] index = new int[]{");
	for (i = 0; i < PH - 2; i++)
	{
		printf("%d,", find_idex(idex, ph[i] - '0',iidex));
	}
	printf("%d};", find_idex(idex, ph[T - 1] - '0', iidex));
	system("pause");
	return 0;
}
int find_idex(int idex[],int n,int iidex)
{
	int i = 0;
	for (i = 0;i<iidex; i++)
	{
		if (n == idex[i])
		{
			return i;
		}
	}
}


*/