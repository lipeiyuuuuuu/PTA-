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
		flag = 0;//�жϸ���ѭ���Ƿ��а�����ϵ
		for (i = 0; i < len1 - 1 - len2; i++)//һ������һ���ַ�
		{
			if (s1[i] == '\n')//s1��ͬ�� Ԫ�ظ�ֵΪ \n ���򵽵�����
			{
				continue;
			}
			j = 0;
			while (j < len2)
			{
				if (s2[j] != s1[i + j])//����� �� ��ͬ��������
				{
					break;
				}
				j++;
			}
			if (j == len2)//j==len2 ���i���е�����ͬ  
			{
				flag = 1;//�˴γ��ְ�����ϵ
				j = 0;
				while (j < len2)//��Ϊ�ַ����� \n ���������ܰ���\n ����\n����ɾ������
				{
					s1[i + j] = '\n';
					j++;
				}
			}
		}
		for (i = 0,j=0; i < len1; i++)//��ɾ��֮����ַ���  ���Ƹ�S3
		{
			if (s1[i] != '\n')
			{
				s3[j] = s1[i];
				j++;
			}
		}
		s3[j] = '\0';//ʹs3��Ϊ�ַ���
		strcpy(s1, s3);
	} while (flag);//Ϊȷ�����ٰ���  ֱ��ȷ��û�а�����ϵ�����
	puts(s1);
	system("pause");
	return 0;
}


*/
