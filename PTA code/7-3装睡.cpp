/*


#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct judge_sleep
{
	char name[20];
	int huxi;
	int maibo;
}s[10];
int main()
{
	int n,i;
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d", s[i].name, &s[i].huxi, &s[i].maibo);
		getchar();
	}
	for (i = 0; i < n; i++)
	{
		if ((s[i].huxi>20 || s[i].huxi < 15) || (s[i].maibo<50 || s[i].maibo>70))
			printf("%s\n",s[i].name);
	}
	system("pause");
	return 0;
}


*/