/*������ʽ�����������ض��������֣����ܰ������򸺷��š�С���㣩��
����������� + �� - ��*�� / ���Լ�С���ţ�(��)����ɣ�ÿ����������
����������Ŷ���һ��token����ǣ������ڣ����ڸ�����һ������������ʽ��
�������ÿ��token�зֳ�������Ŀ��֤�����ı��ʽ����ȷ�ģ�
����Ҫ����Ч�Լ�顣*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 41
int main()
{
	char exp[N];
	int i=0;
	gets(exp);
	do
	{
		if (exp[i] == '(')
		{
			if (exp[i])
			printf("(\n");
		}
		else if (exp[i] == ')') printf(")\n");
		else if (exp[i] == '+') 
		{
			printf("+");
			i++;
//			if (i - 1 == 0)
			if (exp[i - 2] == '(' || i - 1 == 0)
			{
				do
				{
					if (exp[i] == '.')
					{
						printf(".");
						i++;
					}
					else
					{
						printf("%d", exp[i] - 48);
						i++;
					}
				} while ((exp[i] >= '0'&&exp[i] <= '9') || (exp[i] == '.'));
				printf("\n");
			}
			else
				printf("\n");
		}
		else if (exp[i] == '*') printf("*\n");
		else if (exp[i] == '/') printf("/\n");
		else if (exp[i] == '-')
		{
			printf("-");
			i++;
			if (exp[i - 2] == '('||i-1==0)
			{
				do
				{
					if (exp[i] == '.')
					{
						printf(".");
						i++;
					}
					else
					{
						printf("%d", exp[i]-48);
						i++;
					}
				} while ((exp[i] >= '0'&&exp[i] <= '9') || (exp[i] == '.'));
				printf("\n");
			}
			else
				printf("\n");
			continue;
		}
		else if (exp[i] >= '0'&&exp[i] <= '9')
		{
			do
			{
				if (exp[i] == '.')
				{
					printf(".");
					i++;
				}
				else
				{
					printf("%d", exp[i]-48);
					i++;
				}
			} while ((exp[i] >= '0'&&exp[i] <= '9') || (exp[i] == '.'));
			printf("\n");
			continue;
		}
		i++;
	}while (exp[i] != '\0');
	system("pause");
	return 0;}*/