/*你的程序要读入一行文本，其中以空格分隔为若干个单词，以.结束。你要输出每个单词的长度。这里的单词与语言无关，
可以包括各种符号，比如it's算一个单词，长度为4。注意，行中可能出现连续的空格；最后的.不计算在内。
输入格式：
输入在一行中给出一行文本，以.结束
提示：用scanf("%c",...);来读入一个字符，直到读到.为止。
输出格式：
在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。
输入样例：
It's great to see you here.
输出样例：
4 5 2 3 3 4*/
/*



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0,flag = 1;
	char c;
	c = getchar();
	if (c != ' '&&c != '.')
	n++;
	while (c != '.')
	{
		while ((c = getchar()) != ' '&&c != '.')//当字符不为空格或英文句号时开始判断  一次判断一个单词长度
		{
			n++;
		}
		if (flag&&n!=0)//第一次不为零输出的格式
		{
			printf("%d", n);
			flag = 0;
		}
		else if (n!=0)//二次及以上不为零输出
		{
			printf(" %d", n);
		}
		n = 0;//初始化   长度计数器
		//一个单词判断完毕进入判断下一个
	}
	system("pause");
	return 0;
}

*/