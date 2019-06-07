/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 10010
int main()
{
	char scen[N],i,j;
	int maxlen = 0,slen,len_now=0;
	gets(scen);
	slen = strlen(scen);
	for (i = 0; i < slen - 1; i++)
	{
		len_now = 0;
		if (scen[i] = scen[i + 1] && scen[i] == scen[i - 1])
		{

		}
		if (scen[i] == scen[i + 1])//Å¼Êý¶Ô³Æ
		{
			j = 0;
			len_now = 2;
			while ( i + j + 1 < slen - 1 && i - j >= 0 && (scen[i + j + 1] == scen[i - j]))
			{
				len_now += 2;
				j++;
			}
		}
		else
		{
			j = 1;
			len_now = 1;
			while (i + j<slen  &&  i - j >= 0 && (scen[i - j] == scen[i + j]))
			{
				j++;
				len_now += 2;
			}
		}
		if (len_now>maxlen)
			maxlen = len_now;
	}
	printf("%d", maxlen);
	system("pause");
	return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str[1010];
int main()
{
	int i, j, k, t, l;
	gets(str);
	l = strlen(str);
	for (i = l-1; i >= 2; i--)
	{
		for (j = 0; j + i<l; j++)
		{
			for (k = j, t = j + i; k <= t; k++, t--)//
			{
				if (str[k] != str[t])
					break;
			}
			if (k>t)
				break;
		}
		if (j + i<l)
			break;
	}
	if (i >= 2)
		printf("%d", i + 1);
	else
		printf("1");
	system("pause");
	return 0;
}


*/


