/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 5000
#define word 100
int main()
{
	int i = 0, j,total;
	char scen[N][word],t[word],flag;
	do
	{
		scanf("%c", &flag);
		if ( flag != ' '&&flag != '\n')
		{
			j = 1;
			scen[i][0] = flag;
			while (scanf("%c", &scen[i][j]) &&( scen[i][j] != ' '&&scen[i][j] != '\n') )
			{
				j++;
			}
			if (scen[i][j] == '\n')
				flag = '\n';
			scen[i][j] = '\0';
			i++;
		}
	} while (flag!='\n');
	total = i;
	i--;
	for (j=0; j<i; i--,j++)
	{
		strcpy(t, scen[i]);
		strcpy(scen[i], scen[j]);
		strcpy(scen[j], t);
	}
	printf("%s", scen[0]);
	for (i = 1; i < total; i++)
	{
		printf(" %s", scen[i]);
	}
	system("pause");
	return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
char st[540000], link[540000];
int tp, flag;
int main()
{
	int len, i, j;
	while (gets(st) != NULL)
	{
		tp = flag = 0;
		len = strlen(st);
		for (i = len - 1; i >= 0; i--)
		{
			if (st[i] == ' ')
			{
				if (tp > 0)
				{
					if (flag != 0)
						printf(" ");
					for (j = tp - 1; j >= 0; j--)
					{
						printf("%c", link[j]);
					}
					tp = 0;
					flag = 1;
				}
			}
			else
			{
				link[tp++] = st[i];
			}
		}
		if (tp > 0)
		{
			if (flag != 0)
				printf(" ");
			for (j = tp - 1; j >= 0; j--)
			{
				printf("%c", link[j]);
			}
			tp = 0;
			flag = 1;
		}
		if (flag)
			printf("\n");
	}
	return 0;
}

*/