/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100010
int main()
{
	int min_bei=0, ln_1[N], deep[N], mbe, i, dep_t, index_to_num;//mbe-menber 成员个数 index_to_num 下表所对应的值 
	scanf("%d", &mbe);
	for (i = 0; i<mbe; i++)
	{
		scanf("%d", &ln_1[i]);//--------------------------------输入成员
	}
	for (i = 1; i<=mbe; i++)
	{
		dep_t = 1;//记录辈分器
		index_to_num = i;//编号从一开始 
		//输出编号及其父母
		while (ln_1[index_to_num-1] != -1)//如果编号的父母 不是-1 一直循环
		{
			dep_t++;//循环深度 辈分
			index_to_num = (ln_1[index_to_num-1]);///从重获得编号
		}
		deep[i-1] = dep_t;//记录深度  辈分
		if (dep_t>min_bei)
			min_bei = dep_t;//获得最小辈分
	}
	printf("%d\n", min_bei);
	int flag = 1;
	for (i = 0; i < mbe; i++)
	{
		if (deep[i] == min_bei)
		{
			if (flag)
			{
				printf("%d", 1 + i);//输出最小辈分 对应的编号
				flag = 0;
			}
			else
			{
				printf(" %d", 1 + i);
			}
		}
	}
	system("pause");
	return 0;
}


*/



/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100010
int main()
{
	int minn[55], min_flag,min_num=0;
	//定义一个记录最小备份的数组
	int min_bei=0, ln_1[N], deep[N], mbe, i, dep_t, index_to_num;//mbe-menber 成员个数 index_to_num 下表所对应的值 
	scanf("%d", &mbe);
	for (i = 0; i<mbe; i++)
	{
		scanf("%d", &ln_1[i]);//--------------------------------输入成员
	}
	for (i = 1; i<=mbe; i++)
	{
		dep_t = 1;//记录辈分器
		index_to_num = i;//编号从一开始 
		//输出编号及其父母
		while (ln_1[index_to_num-1] != -1)//如果编号的父母 不是-1 一直循环
		{
			dep_t++;//循环深度 辈分
			index_to_num = (ln_1[index_to_num-1]);///从重获得编号
		}

		deep[i-1] = dep_t;//记录深度  辈分
		if (dep_t == min_bei)
		{
			minn[min_num] = i;
		//	printf("%d-----%d\n",min_num ,i);
			min_num++;
		}
		else if (dep_t > min_bei)//有更小辈分
		{
		//	printf("%d-----%d\n", min_num, i);
			min_bei = dep_t;//获得最小辈分
			min_num = 0;
			minn[min_num] = i;
			min_num++;
		}
	}
	printf("%d\n", min_bei);
	int flag = 1;
	printf("%d", minn[0]);
	for (i = 1; i < min_num; i++)
		printf(" %d", minn[i]);
	system("pause");
	return 0;
}



*/