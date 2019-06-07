/*


#define _CRT_SECURE_NO_WARNINGS
//虽让不知道为啥  兔子为奇数是不会被吃掉 偶数时候被吃掉QAQ
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int judge(int h);
int main()
{
	int f=1, h,i=0,flag =0;//计数变量器
	scanf("%d", &h);
	flag = judge(h);
	if (flag == 1)
	{
		printf("Fox");
	}
	else
	{
		printf("Hare");
	}
	system("pause");
	return 0;
}
int judge(int h)
{
	int flag = 0,f=1,i=0;
	while (1){
		if (f == h){//退出条件1  兔子被吃
			flag = 1;
			break;
		}
		//----------------------------------
		//对狐狸走位的判断
		if (f == 30)
			f--;
		else if (f == 1)
			f++;
		else if (f < h)
			f++;
		else if (f>h)
			f--;
		//-------------------------------------
		//对兔子走位的判断
		if (h == 30||h==29||h==28)//在右边界 只能左移
			h -= 3;
		else if (h == 1||h==2||h==3)//在左边界只能右移
			h += 3;
		else if (h-2==f||h-4==f)//当前兔子狐狸的位置 若兔子左移则会被吃 故右移
			h += 3;
		else if (h + 2 == f || h + 4 == f)//原理同上
			h -= 3;
		else if (h - 1 == f)//狐狸在兔子左一格  则兔子左跳三格
			h -= 3;
		else if (h + 1 == f)//原理同上
			h += 3;
		else if (h > f)//普通位置  越远越好
			h += 3;
		else if (h < f)//普通位置  同上
			h -= 3;
		i++;
		if (i == 50)//超过五十次则判定兔子不会被吃
			break;
	}
	if (i == 50)
		flag = 0;
	return flag;
}


*/
