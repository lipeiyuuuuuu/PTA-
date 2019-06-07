/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 88
int main()
{
	char s1[N], s2[N],s3[N];
	gets(s1);
	gets(s2);
	int len1=strlen(s1), len2=strlen(s2),j,i,flag=0;
	do
	{
		flag = 0;//判断给次循环是否有包含关系
		for (i = 0; i < len1 - 1 - len2; i++)//一次右移一个字符
		{
			if (s1[i] == '\n')//s1相同的 元素赋值为 \n 遇则到的跳过
			{
				continue;
			}
			j = 0;
			while (j < len2)
			{
				if (s2[j] != s1[i + j])//如果有 不 相同的则跳出
				{
					break;
				}
				j++;
			}
			if (j == len2)//j==len2 则从i起有单词相同  
			{
				flag = 1;//此次出现包含关系
				j = 0;
				while (j < len2)//因为字符串以 \n 结束不可能包含\n 则用\n代替删除操作
				{
					s1[i + j] = '\n';
					j++;
				}
			}
		}
		for (i = 0,j=0; i < len1; i++)//将删减之后的字符串  复制给S3
		{
			if (s1[i] != '\n')
			{
				s3[j] = s1[i];
				j++;
			}
		}
		s3[j] = '\0';//使s3成为字符串
		strcpy(s1, s3);
	} while (flag);//为确保不再包含  直到确认没有包含关系后输出
	puts(s1);
	system("pause");
	return 0;
}


*/
