
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#define N 20
double myatof(char s[]);
int main()
{
	double num;
	char s[N];
	while (1)
	{
		scanf("%s", s);
		if (s[0] == 'q') break;
		num = myatof(s);
		printf("%f\n", num);

	}
	system("pause");
	return 0;
}
double myatof(char s[])
{
	double f = 0, e = 1;
	int i = 0, flag = 1,flag_2=0,flag_z=0;
	while (s[i]!='\0')
	{
		if (s[i] == ' ' || (s[i] == '-' || s[i] == '+' || s[i] == '.') || (s[i] >= '0'&&s[i] <= '9'))//第一次遇到 - + . 数字
		{
			if (s[i] == ' ')
			{
				i++;
				continue;
			}
			flag_2;
			if (s[i] >= '0'&&s[i] <= '9')//第一次遇到 数字
			{
				f = f * 10 + (s[i] - '0');
			}
			else if (s[i] == '.')//遇到 。 时进入且在此语句段内返回
			{
				e *= 0.1;
				i++;
				while (1)
				{
					if (s[i] < '0' || s[i] > '9')
						return f*flag;
					f += (double)(s[i] - '0')*e;
					e *= 0.1;
					i++;
				}
			}
			//---------------------------------------------------------------------------------------------
			else if (s[i] == '-')//遇到负号时
			{
				if (flag == -1||flag_z==1)//已经收到  负号或正号
				{
					if (f == 0 || f == -0)
						return (int)f;
					return flag*f;
				}
				flag = -1;
			}
			//---------------------------------------------------------------------------------------------
			else if (s[i] == '+')//遇到正号时
			{
				if (flag == -1 || flag_z == 1)
				{
					if (f == 0 || f == -0)
						return (int)f;
					return flag*f;
				}
				flag_z = 1;
			}
		}
		else if (f == 0||f==-0)//遇到输入  其他字符 则结束判断
			return 0;
		else
			return flag*f;
		i++;
	}
	if (f == 0)
		return (int)f;
	return f*flag;
}

*/