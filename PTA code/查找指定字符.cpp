/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x, c;
	scanf("%c", &x);
	getchar();//������������س���   �س��������̻����� ������ȥ�س��� 
	char str[81]; //������strʱ��Ӽ��̻������Զ�����  �Ӷ�ʹstr��������
	gets(str);
	int i, flag=0;
	int idex;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (x == str[i])
		{
			idex = i;
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("index = %d", idex);
	}
	else
	{
		printf("Not Found");
	}
	system("pause");
	return 0;
}*/
////////////////////////////////////////////////////////////////////
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[67];
	int i;
	char c;
	scanf("%d", &i);
	getchar();
	gets(s);
	puts(s);
	system("pause");
	return 0;
}
*/