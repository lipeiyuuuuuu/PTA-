/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 11    //宏定义后面没有分号   记住
int main()
{
	int str[N][N];
	int bc, one, two, three, four,h=0,l=0,qs,k=1;//bc _bian chang ;qs_quan shu ;k_ji shu qi;
	scanf("%d", &bc);
	one = bc, two = bc - 1, three = bc - 1, four = bc - 2;
	qs = (bc+1)/ 2;
	int i,j;
	for (i = 0; i < qs; i++)//循环一次运行一圈
	{
		for (j = 0; j < one; j++)
		{
			str[h][l] = k;
			k++;
			l++;
		}
		l--;//fang zhi yi chu 
		h++;//wei xia yi ci shu ru zou zhun bei 
		for (j = 0; j < two; j++)
		{
			str[h][l] = k;
			k++;
			h++;
		}
		h--;//fang zhi yi chu 
		l--;//wei xia yi ci shu ru zou zhun bei 
		for (j = 0; j < three; j++)
		{
			str[h][l] = k;
			k++;
			l--;
		}
		l++;//fang zhi yi chu 
		h--;//wei xia yi ci shu ru zou zhun bei 
		for (j = 0; j < four; j++)
		{
			str[h][l] = k;
			k++;
			h--;
		}
		h++;//fang zhi yi chu 
		l++;//wei xia yi ci shu ru zou zhun bei 
		one = one-2, two = two-2, three = three-2, four = four-2;
	}
	for (h = 0; h <= bc - 1; h++)
	{
		for (l = 0; l <= bc - 1; l++)
		{
			printf("%3d", str[h][l]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
	}*/