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
	//t temp---—>judge panduan--->t temp-----> new_a       ||while(len_of_a<=n)
	long total;								//给出的数字个数
	int sca[T];                             //记录输入的数字

	int t[T];								//暂存数组   ——>  b
	int len_of_t=0;                         //新存入a的数字个数

	int a[N] = { 0 };						//神奇字符串
	long len_of_a = 0;

	int judge[M] = { 0 };					//判断数组   ——>  a
	int len_of_judge=0;                     //判断中的个数

	int prt[N] = { 0 };						//输出时需要的数组
	int stor[N] = { 0 };					// 储存给出的t个数  

	long i, j;								//计数变量

	long  num_of_1 = 0;                     //统计1的个数
//---------------输入-------------------------
	scanf("%ld", &total);
	for (i = 0; i < total; i++)	{		scanf("%d", &sca[i]);	}
//----------------核心步骤--------------------
	a[0] = 1;
	long len_of_a = 1;//a 的长度计数器加 1
	len_of_judge = 1;
	len_of_t = 1;
	t[0] = 1;
	num_of_1++;
	int flag;//judge 判断标志
	do
	{
		for (i = 0; i < len_of_t; i++)//将 a新得到的数  存在t中  将t复制给judge
			judge[i] = t[i];
		len_of_judge = len_of_t;//此时judge 与 t 相同    故 len_of_t 既是 len_of_judge
		flag = t[len_of_t - 1];//  flag 为每次判断循环的其实判断依据

		len_of_t = 0;//初始化 t的长度
		j = 0;
		for (i = 0; i < len_of_judge; i++)
		{
			if (flag == 1)            //a 的末尾为1
			{
				//如果
				if (judge[i] == 1)//a增加一个长度
				{
					a[len_of_a++] = 2;
					t[len_of_t++] = 2;
					flag = 2;
				}
				else if (judge[i] == 2)//a增加两个长度
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
			else if (flag == 2)    //a 的末尾为2 
			{
				//如果
				if (judge[i] == 1)//a增加一个长度
				{
					a[len_of_a++] = 1;
					t[len_of_t++] = 1;
					flag = 1;
					num_of_1 += 1;
				}
				else if (judge[i] == 2)//a增加两个长度
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
//---------------输出-------------------------
	for (i = 0; i < total; i++)
	{
		printf("%d\n", prt[ sca[i] ]);
	}
	system("pause");
	return 0;
}

*/