/*
//////一定要把它弄清楚    有错误
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 1000
#define M 12
int main()
{
	char wen[N][M];
	int k;
	scanf("%d", &k);
	k++;
	int i=1;
	char it[M];
	do
	{
		scanf("%s", it);
		if (!strcmp(it, "End"))
		{
			break;
		}
		else if (i%k != 0)
		{
			if (!strcmp(it,"ChuiZi"))
			{
				strcpy(wen[i], "Bu\n");
			}
			else if (!strcmp(it, "Bu"))
			{
				strcpy(wen[i], "JianDao\n");
			}
			else if (!strcmp(it, "ChuiZi"))
			{
				strcpy(wen[i], "Bu\n");
			}
			i++;
		}
		else
		{
			strcat(it,"\n");
			strcpy(wen[i], it);
			i++;
		}
	} while (1);
	int n = i;
	for (i = 1; i <= n; i++)
	{
		printf("%s", wen[i]);
	}
	system("pause");
	return 0;
}


*/
//////////////////////////////////////////////
/*


#include<stdio.h>
#include <string.h>
int main(){
	int m=0;
	char a[10000][12];
	int num;
	char str[10] = { "" };
	int count = 0;
	int i;
	char str1[10] = { "ChuiZi" };
	char str2[10] = { "JianDao" };
	char str3[10] = { "Bu" };
	char str4[10] = { "End" };
	scanf("%d", &num);
	num++;
	for (i = 0;; i++)
	{
		scanf("%s", str);
		count++;
		if (!strcmp(str, str4))
			break;
		if (!strcmp(str, str1)){
			if (count%num == 0){
//				strcpy(a[m], "ChuiZi\n");
				printf("ChuiZi\n");
			}
			else{
//				strcpy(a[m], "Bu\n");
				printf("Bu\n");
			}
		}
		else if (!strcmp(str, str3)){
			if (count%num == 0){
//				strcpy(a[m], "Bu\n");
			printf("Bu\n");
			}
			else{
//				strcpy(a[m], "JianDao\n");
				printf("JianDao\n");
			}
		}
		else if (!strcmp(str, str2)){
			if (count%num == 0){
//				strcpy(a[m], "JianDao\n");
				printf("JianDao\n");
			}
			else{
//				strcpy(a[m], "ChuiZi\n");
				printf("ChuiZi\n");
			}
		}
		m++;
	}
//	for (i = 0; i < m; i++)
//	{
//		printf("%s", a[i]);
//	}
	return 0;
}


*/