
//------------------------------------------------暴力法-----------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,d;
	scanf("%d", &a);
	b = a + 1, c = a + 2; d = a + 3;
	printf("%d %d %d %d %d %d\n", a*100 + b*10 +c , a*100 + b*10 + d, a*100 + c*10 +b , a*100 + c*10 +d , a*100 + d*10 + b, a*100 + d*10 + c );
	printf("%d %d %d %d %d %d\n", b*100 + a*10 +c , b*100 + a*10 + d, b*100 + c*10 + a, b*100 +c *10 +d , b*100 + d*10 +a ,b *100 + d*10 +c );
	printf("%d %d %d %d %d %d\n",c *100 + a*10 +b , c*100 + a*10 +d , c*100 +b *10 + a, c*100 + b*10 + d, c*100 + d*10 + a, c*100 +d *10 + b);
	printf("%d %d %d %d %d %d\n", d*100 + a*10 + b, d*100 + a*10 + c, d*100 + b*10 +a , d*100 + b*10 +c , d*100 + c*10 +a , d*100 + c*10 + b);
	system("pause");
	return 0;
}
*/





//---------------------------------------------模拟法--------------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void cz_fz(int num[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	int i, j, k, m, t;
	int num[4], flag = 1,flag_2;				//flag_2   每行数字个数计数器  当输出最后一个时不用加空格
	for (i = 0; i<4; i++)						//循环一次输出六个数
	{
		cz_fz(num, n);							//数组初始化
		num[i] = 0;								//百位确定输出  则赋值为0   相当于删除操作
		flag_2 = 0;
		for (j = 0; j<1; j++)
		{
			for (k = 0; k<4; k++)				//循环一次输出两个数  或不输出
			{
				if (num[k] != 0)				//判断并输出十位  以及下一位数
				{
					printf("%d", n + i);		//输出百位
					printf("%d", num[k]);		//输出十位
					num[k] = 0;					//  删除m[k]
					for (m = 0; m<4; m++)		//输出个位
					{
						if (num[m] != 0)
						{
							if (flag)			//flag 如果为一则为 一对数的第一个  
							{
								printf("%d ", num[m]);//输出个位
								num[m] = 0;		 //  删除num[m]  
								flag = 0;
								flag_2++;
							}
							else
							{
								t = num[m];		//保存下一个 十位百位 相同的数的    个位  
								num[m] = 0;
								flag = 1;
							}
						}
					}
					cz_fz(num, n);				//为了输出下一个数字 ，且 为下一次循环做准备
					num[i] = 0;					//每行的百位是固定的   且不可能出现在同行的个十位中
					printf("%d%d%d", i + n, num[k], t);//输出一对数  的后一位
					flag_2++;
					if (flag_2%6!=0)           //当输出最后一个时不用加空格
						printf(" ");
				}
			}
		}
			printf("\n");

	}
	system("pause");
	return 0;
}
void cz_fz(int num[], int n)
{
	int i;
	for (i = 0; i<4; i++)
	{
		num[i] = n + i;
	}
}

*/




//----------------------------------------------------有错误---------------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void cz_fz(int num[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	int i, j, k, m, t;
	int num[4], flag = 1;
	int flag_2=0;
	for (i = 0; i<4; i++)//循环一次输出六个数
	{
		cz_fz(num, n);//数组初始化
		num[i] = 0;//百位确定输出  则赋值为0

		flag = 0;
		for (j = 0; j<1; j++)
		{
			for (k = 0; k<4; k++)//判断并输出十位  以及下一位数
			{
				if (num[k] != 0)
				{
					printf("%d", n + i);//输出百位
					printf("%d", num[k]);//输出十位
					num[k] = 0;
					for (m = 0; m<4; m++)//输出个位
					{
						if (num[m] != 0)
						{
							if (flag)
							{
								printf("%d ", num[m]);//输出个位
								num[m] = 0;
								flag = 0;
								flag_2++;
							}
							else
							{
								t = num[m];//保存下一个 十位百位 相同的数的 个位  
								num[m] = 0;
								flag = 1;
							}
						}
					}
					cz_fz(num, n);
					num[i] = 0;
					printf("%d%d%d", i+n, num[k], t);
					flag_2++;
					if (flag_2 % 6 != 0)
						printf(" ");
//						printf(" %d ",flag_2);
				}
			}
		}
		printf("\n");




	}
	system("pause");
	return 0;
}
void cz_fz(int num[], int n)
{
	int i;
	for (i = 0; i<4; i++)
	{
		num[i] = n + i;
	}
}

*/
