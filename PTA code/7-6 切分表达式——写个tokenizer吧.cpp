/*运算表达式由运算数（必定包含数字，可能包含正或负符号、小数点）、
运算符（包括 + 、 - 、*、 / ）以及小括号（(和)）组成，每个运算数、
运算符和括号都是一个token（标记）。现在，对于给定的一个四则运算表达式，
请把她的每个token切分出来。题目保证给定的表达式是正确的，
不需要做有效性检查。*/
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