/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 1010
void exchange(char a[], char b[]);
int main()
{
	char a[N], b[N], t[N], t2[N] = "1";
	int a_, b_, t_;             //��¼a,b,t ������±� 
	int la, lb, lt;
	scanf("%s %s", a, b);
	//	printf("%s %s\n", a, b);
	la = strlen(a) - 1;
	lb = strlen(b) - 1;
	if (strlen(a) < strlen(b))//���a�ĳ���С  �򽻻�a b
	{
		exchange(a, b);
		la = strlen(a) - 1;
		lb = strlen(b) - 1;
	}
	strcpy(t, a);
	//	printf("%s %s %s\n", a, b,t);
	lt = strlen(t) - 1;
	a_ = la,
	b_ = lb;
	t_ = lt;
	//	printf("%d %d %d\n", a_, b_,t_);
	t[lt] = (a[la] + b[lb] - '0' - '0') % 10 + '0';//���ڸ�λ�ļ�������  ��������
	//	printf("%c", t[lt]);
	int flag = 0;
	if (a[la] + b[lb] - '0' - '0'>9)
	{
		flag = 1;
	}
	lb--, la--, lt--;//Ϊ����ʮλ׼��
	for (; lb >= 0; lb--, la--, lt--)
	{
		t[lt] = (a[la] + b[lb] - '0' - '0' + flag) % 10 + '0';
		if ((a[la] + b[lb] - '0' - '0' + flag) / 10 == 1)
			flag = 1;
		else
			flag = 0;
	}
	la++, lb++;//�˴�tδ��һ  ʹ  lb==0
	if (a_ == b_  && flag)
	{
		strcat(t2, t);
		strcpy(t, t2);// ��չλ��  
	}
	else// ��b�ĳ��ȶ�ʱ  �ж��Ƿ���Ҫ��λ
	{
		if (flag&& lt >= 0)
		{
			t[lt]++;//��� b�����λ �� a����Ӧλ֮�ʹ���9 ��t��Ӧ�ĸ���һλ��һ
			while (t[lt] == '9' + 1 && t >= 0)//
			{
				t[lt] = '0';
				if (lt != 0)//��ֹ���
				{
					t[lt - 1]++;
				}
				lt--;
			}
		}
		if (t[0] == '0')//��t[0] Ϊ��ʱ �϶�Ҫ��һ��һ
		{
			strcat(t2, t);
			strcpy(t, t2);
		}
	}
	puts(t);
	system("pause");
	return 0;
}
//consure a is max
void exchange(char a[], char b[])
{
	char t[N];
	strcpy(t, a);
	strcpy(a, b);
	strcpy(b, t);
}

*/