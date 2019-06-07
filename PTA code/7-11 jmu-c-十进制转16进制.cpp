/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char trans(int t);
void loop(char *oX);
int main()
{
	int n,quotient,i=0;
	scanf("%d", &n);
	char oX[1000];
	do
	{
		quotient = n / 16; 
		if (quotient != 0)
		{
			oX[i] = trans(n % 16);
		}
		else if (quotient==0)
		{
			oX[i] = trans(n);
		}
		i++;
		n = quotient;
	} while (quotient != 0);
	oX[i] = '\0';
	loop(oX);
	puts(oX);
	system("pause");
	return 0;
}
char trans(int t)
{
	char c;
	if (t >= 0 && t <= 9)
	{
		c = '0' + t;
	}
	else if (t>=10&&t<=15)
	{
		c = 'A' + t - 10;
	}
	return c;
}
void loop(char *oX)
{
	int t,i;
	char c;
	t = strlen(oX)-1;
	for (i = 0; i < t; i++, t--)
	{
		c = oX[t];
		oX[t] = oX[i];
		oX[i] = c;
	}
}

*/

//直接用格式控制说明符 %X (若有字母则为大写)   %x（若有字母  则为小写）
/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%X", n);
	system("pause");
	return 0;
}

*/