/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 101
#define M 11
int main()
{
	int n_scl, tm[N][M] = { 0 }, n_tm = 0, scl_tm_num[N];//二位数组的每行第一个数记录队伍编号
	scanf("%d", &n_scl);//n_tm  队伍总数  scl_tm_tm 每个学校的队数
	int i, j;
	for (i = 0; i < n_scl; i++)
	{
		scanf("%d", &scl_tm_num[i]);//输入每个学校的对数
		//printf("\n<--%d-->  \n", scl_tm_num[i]);
		n_tm += scl_tm_num[i];//统计全部的队数
		//printf("%d-%d-%d\n",n_tm, n_tm - scl_tm_num[i],scl_tm_num[i]);
		for (j = n_tm - scl_tm_num[i]; j < n_tm; j++)
		{
			tm[j][0] = i;//每行的第一位储存学校编号
			//printf("-%d %d-", tm[j][0],tm[j][1]);
		}
	}
	//for (i = 0; i < n_tm; i++)
	//	printf("%d\n", tm[i][0]);
	//printf("\n---%d----", n_tm);
	int out_num=0;
	if (n_scl == 1)
	{
		//printf("--");
		for (i = 0; i < scl_tm_num[0];i++)//循环一次赋值一队
		{
			
			for (j = 1; j <= 10; j++)
			{
				tm[i][j] = 20 * i + 2 * (j-1)+1;
			}

		}
	}
	else
	{
		1;
	}
	for (i = 0; i < n_scl; i++)
	{
		printf("#%d\n", i+1);
		out_num += scl_tm_num[i];
		for (j = out_num - scl_tm_num[i]; j < n_tm; j++)
		{
			printf("%d %d %d %d %d %d %d %d %d %d\n", tm[j][1], tm[j][2], tm[j][3], tm[j][4], tm[j][5], tm[j][6], tm[j][7], tm[j][8], tm[j][9], tm[j][10]);
		}

	}
	system("pause");
	return 0;
}


*/