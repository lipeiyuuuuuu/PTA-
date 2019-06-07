/*以上是新浪微博中一奇葩贴：“我出生于1988年，直到25岁才遇到4个数字都不相同的年份。”也就是说，直到2013年才达到“4个数字都不相同”的要求。本题请你根据要求，自动填充“我出生于y年，直到x岁才遇到n个数字都不相同的年份”这句话。
输入格式：
输入在一行中给出出生年份y和目标年份中不同数字的个数n，其中y在[1, 3000]之间，n可以是2、或3、或4。注意不足4位的年份要在前面补零，例如公元1年被认为是0001年，有2个不同的数字0和1。
输出格式：
根据输入，输出x和能达到要求的年份。数字间以1个空格分隔，行首尾不得有多余空格。年份要按4位输出。注意：所谓“n个数字都不相同”是指不同的数字正好是n个。如“2013”被视为满足“4位数字都不同”的条件，但不被视为满足2位或3位数字不同的条件。
输入样例1：
1988 4
输出样例1：
25 2013
输入样例2：
1 2
输出样例2：
0 0001*/
//---------------------------------------------------------------------------------my1.0

//要点    1.比较数字的每一位数是否相同 （解答：[1] 用 变量 将年份经除以10^k后取余 得到的数储存起来  
//[2]用严格的条件判定数字中用了几个数字.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int main()
{
	int n, x, y;
	scanf("%d %d", &y, &n);//生于Y年  到x岁 年数中n个数不同
	int g, s, b, q,flag;
	for (x = 0;; x++)
	{
		g = (y + x) % 10;
		s = (y + x) /10% 10;
		b = (y + x) /100% 10;
		q = (y + x) /1000;
		if (g != s&&g != b && g != q&&s != b&&s != q&&b != q)
		{
			flag = 4;
			if (flag == n)
			{
				printf("g=%d s=%d b=%d q=%d\n%d\n", g, s, b, q,flag);
				break;
			}
		}
		else if (((g != s&&g != b &&s != q) && (q == g || q == s || q == b)) || ((g != s&&s != b &&b != g) && (b == g || b == s || b == q)) || ((g != q&&q != b &&b != g) && (s == g || s == q || s == b)) || ((q != s&&s != b &&b != q) && (g == q || g == s || g == b)))
		{
			flag = 3;
			if (flag == n)
			{
				printf("g=%d s=%d b=%d q=%d\n%d\n", g, s, b, q, flag);
				break;
			}
		}
		else if (((g == s&&b == q&&g != q) || (g == b&&s == q&&b != s) || (q == g&&s == b&&b != q)) || (g == s&&g == b&&g != q) || (g == b&&g == q&&g != s) || (g == s&&g == q&&g != b) || (s == b&&s == q&&s != g))
		{
			flag = 2;
			if (flag == n)
			{
				printf("g=%d s=%d b=%d q=%d\n%d\n", g, s, b, q, flag);
				break;
			}
			
		}
	}
	printf("%d %04d", x, y+x);
	system("pause");
	return 0;
}
*/
//--------------------------------------------------------------------------------CSDNCSDNCSDNCSDNCSDN

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <stdlib.h>
int getNum(int age);
int main()
{
	int age, num, i;
	scanf("%d%d", &age, &num);
	for (i = 0;; i++){
		if (getNum(age + i) == num)
			break;
	}
	printf("%d %04d", i, age + i);
	system("pause");
	return 0;
}
int getNum(int age)
{
	int a, b, c, d;
	int num[10] = { 0 };//初始化数组为0
	a = age % 10;
	b = age / 10 % 10;
	c = age / 100 % 10;
	d = age / 1000;
	num[a]++;
	num[b]++;
	num[c]++;
	num[d]++;//及其富有思想    
	if (num[a] == 4 || num[b] == 4 || num[c] == 4 || num[d] == 4)
		return 1;                                                //四个字母相同返回 1 即sum中的元素和为一
	if (num[a] == 3 || num[b] == 3 || num[c] == 3 || num[d] == 3)//return 相当于else  若进行到此if  则一定不满足之前的条件 ，以下同理
		return 2 ;                                               //有3个字母相同   2  即sum中的元素和为二   //4个字母相同也符合该条件  但是第一个if  已经判断出4个字母相同返回1
	if (num[a] == 1 && num[b] == 1 && num[c] == 1 && num[d] == 1)//等价于sum中元素和为4
		return 4;                                                //返回值为4 只有这一种情况
	if (num[a] == 1 || num[b] == 1 || num[c] == 1 || num[d] == 1)
		return 3;//返回值为2也包含这种情况  但是到此if已经判断不为3 
	return 2;
}
*/
//-------------------------------------------------------------------------------------CSDNCSDNCSDNCSDNCSDN
//很绝妙的思想↓
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int y, n;
	int a, b, c, d;//各个位数上的值，a为千位，b为百位，c为十位，d为个位
	int f[10];
	int x = 0;
	scanf("%d %d", &y, &n);
	for (int i = y; i<10000; i++)
	{
		a = i / 1000;
		b = i / 100 % 10;
		c = i % 100 / 10;
		d = i % 10;
		memset(f, 0, sizeof(f));//将数组f中所以的元素初始化为0  --- memset(f,0,sizeof(f))  将f当前位置后的n个字节用0填充
		/*void *memset(void *s, int ch, size_t n);
		函数解释：  将s中当前位置后面的n个字节 （typedef unsigned int size_t ）用 ch 替换并返回 s 。
		memset：作用是在一段内存块中填充某个给定的值，它是对较大的结构体或数组进行清零操作的一种最快方法 [1]  。
		memset()函数原型是extern void *memset(void *buffer, int c, int count) 
		buffer：为指针或是数组,c：是赋给buffer的值,count：是buffer的长度.  (记得补星号反斜杠*、)
		f[a] = 1;
		if (f[b] != 1)//如果数字中不包含b 则f（b）=1，（即标记b已出现）
			f[b] = 1;
		if (f[c] != 1)
			f[c] = 1;
		if (f[d] != 1)
			f[d] = 1;//变量大小做数组名
		int sum = 0;
		for (int j = 0; j<10; j++)
		{
			sum = sum + f[j];
		}//此时sum即是
		
		if (sum == n)
		{
			printf("%d %04d", i - y, i);//i-y 年龄即循环次数  i 即年份
			x++;
		}
	}
	system("pause");
	return 0;
}
//思想总结：用数组将数字0至9出现的个数次数储存起来   即只要该数字出现则 对应下标的元素加一   
//最后将数组元素之和相加  得到的sum即是不同数字的个数   ，如果不符合则初始化数组  ，否则输出 对应年龄 和年份
*/
//---------------------------------------------------------------------------------my2.0
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n, x, y,sum;
	scanf("%d %d", &y, &n);//生于Y年  到x岁 年数中n个数不同
	int g, s, b, q, flag,i;
	for (x = 0;; x++)
	{
		int f[10] = { 0 },sum=0;
		g = (y + x) % 10;
		s = (y + x) / 10 % 10;
		b = (y + x) / 100 % 10;
		q = (y + x) / 1000;
		f[g] = 1;
		if (f[s] != 1)
			f[s] = 1;
		if (f[b] != 1)
			f[b] = 1;
		if (f[q] != 1)
			f[q] = 1;
		for (i = 0; i < 10; i++)
		{
			sum += f[i];
		}
		if (sum == n)
		{
			printf("%d %04d", x, y + x);
			break;
		}
	}
	system("pause");
		return 0;
}
*/
