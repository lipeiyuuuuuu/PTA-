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
	int a_, b_, t_;             //记录a,b,t 的最大下标 
	int la, lb, lt;
	scanf("%s %s", a, b);
	//	printf("%s %s\n", a, b);
	la = strlen(a) - 1;
	lb = strlen(b) - 1;
	if (strlen(a) < strlen(b))//如果a的长度小  则交换a b
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
	t[lt] = (a[la] + b[lb] - '0' - '0') % 10 + '0';//由于个位的计算特殊  单独计算
	//	printf("%c", t[lt]);
	int flag = 0;
	if (a[la] + b[lb] - '0' - '0'>9)
	{
		flag = 1;
	}
	lb--, la--, lt--;//为计算十位准备
	for (; lb >= 0; lb--, la--, lt--)
	{
		t[lt] = (a[la] + b[lb] - '0' - '0' + flag) % 10 + '0';
		if ((a[la] + b[lb] - '0' - '0' + flag) / 10 == 1)
			flag = 1;
		else
			flag = 0;
	}
	la++, lb++;//此处t未加一  使  lb==0
	if (a_ == b_  && flag)
	{
		strcat(t2, t);
		strcpy(t, t2);// 扩展位数  
	}
	else// 当b的长度短时  判断是否需要进位
	{
		if (flag&& lt >= 0)
		{
			t[lt]++;//如果 b的最大位 与 a的相应位之和大于9 则t对应的更高一位加一
			while (t[lt] == '9' + 1 && t >= 0)//
			{
				t[lt] = '0';
				if (lt != 0)//防止溢出
				{
					t[lt - 1]++;
				}
				lt--;
			}
		}
		if (t[0] == '0')//当t[0] 为零时 肯定要补一个一
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