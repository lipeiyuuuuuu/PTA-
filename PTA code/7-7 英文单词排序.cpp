/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	
	int i=0,j,k;
	char a[21][11],t[10];
	while (a[i-1][0] != '#')
	{
		gets(a[i]);
		i++;
	}
	if (i == 1)
	{
		system("pause");
		return 0;
	}
	for (j = 0; j < i; j++)
	for (k = 0; k < i - 2; k++)
	{
		if (strlen(a[k])>strlen(a[k + 1]))
		{
			strcpy(t, a[k]);
			strcpy(a[k], a[k+1]);
			strcpy(a[k+1],t);
		}
	}
	for (j = 0; j < i-1; j++)
		printf("%s ", a[j]);
	system("pause");
	return 0;
}
*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int cmp(const void * a, const void *b) //qsort库要求参数const
{
	int i = strlen((char*)a),j=strlen((char*)b);
	return i - j;
}
int main()
{
	int i=0,j;
	char a[21][11];
	while (a[i-1][0] != '#')
	{
		//printf("--");
		gets(a[i]);
		i++;
	}
	qsort(a, i-1, sizeof(a[0]), cmp);
	printf("%s", a[0]);
	for (j = 1; j < i-1; j++)
		printf(" %s", a[j]);
	system("pause");
	return 0;
	}
	
	*/