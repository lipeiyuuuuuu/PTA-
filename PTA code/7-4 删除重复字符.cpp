/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble(char *new_str, int len);
#define N 100
int main()
{
	char str[N],new_str[N];
	int i=0, len,new_len=0,j;
	while (scanf("%c", &str[i]) && str[i] != '\n')
	{
		i++;
	}
	len = i;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == str[j] && i != j&&str[i] != '\0')//如果出现重复，且不在同一位置，不为NULL  则赋值为NULL
			{
				str[i] = '\0';
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != '\0')
		{
			new_str[new_len] = str[i];
			new_len++;
		}
	}
	new_str[new_len] = '\0';
	bubble(new_str, new_len);
	puts(new_str);
	system("pause");
	return 0;
}
void bubble(char *new_str,int len)
{
	int i, j;
	char t;
	for (j = 0; j < len - 1; j++)
	{
		for (i = 0; i<len-1-j; i++)
		{
			if (new_str[i]>new_str[i + 1])
			{
				t = new_str[i];
				new_str[i] = new_str[i + 1];
				new_str[i + 1] = t;
			}
		}
	}

}

*/