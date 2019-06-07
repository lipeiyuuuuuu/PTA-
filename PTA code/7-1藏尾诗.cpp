//chang wei shi
//一个汉字字符两个字节
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void take_last(int i, char scen[], char word[]);
#define N 30
int main()
{
	char scen[9] = { 0, 0, 0, 0, 0, 0, 0, 0, '\0' }, word[N];
	int i;
	for (i = 0; i < 4; i++)
	{
		gets(word);
		//scanf("%s\n", &word);
		take_last(i, scen, word);
	}
	printf("%s\n", &scen);
	system("pause");
	return 0;
}
void take_last(int i,char scen[],char word[])
{
	int t=0;
	while (word[t] != '\0')
	{
		scen[i*2] = word[t-1];
		scen[2*i+1] = word[t];
		t++;
	}
}
*/
/////---------------------------------------------
//1.1
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 30
int main()
{
	char scen[9],word[N];
	scen[8] = '\0';
	int i = 0;
	while (i < 8)
	{
		gets(word);
		scen[i] = word[strlen(word)-2];
//或 	//i++;
		//scen[i] = word[strlen(word)-1];
		scen[++i] = word[strlen(word)-1];
		i++;
	}
	printf("%s\n", scen);
	system("pause");
	return 0;
}

*/
