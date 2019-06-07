/*7-5 龟兔赛跑 （20 分）
乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。乌龟每分钟可以前进3米，兔子每分钟前进9米；
兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟，于是，每跑10分钟回头看一下乌龟，若发现自己超过乌龟，就在路边休息，每次休息30分钟，
否则继续跑10分钟；而乌龟非常努力，一直跑，不休息。假定乌龟与兔子在同一起点同一时刻开始起跑，请问T分钟后乌龟和兔子谁跑得快？
输入格式：
输入在一行中给出比赛时间T（分钟）。
输出格式：
在一行中输出比赛的结果：乌龟赢输出@_@，兔子赢输出^_^，平局则输出-_-；后跟1空格，再输出胜利者跑完的距离。*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t, turts=0, rabbs=0;
	scanf("%d", &t);
	int now;
	for (now = 0; now <= t;)
	{
//		printf("--------------%d  %d  %d  %d\n", turts, rabbs,now,t);
		if (turts < rabbs)
		{
	//				printf("--------------%d  %d  %d  %d\n", turts, rabbs,now,t);
			if (t - now >= 30)
				now = now + 30;
			else
				now = t;
			turts = now * 3;
		}
		else
		{
			if (t - now < 10)
				now = t;
			else 
				now = now + 10;
			rabbs = rabbs + 90;
			turts = now * 3;
//			printf("--------------%d  %d  %d  %d\n", turts, rabbs, now, t);
		}
	}
	if (rabbs > turts)
		printf("^_");
	else if (rabbs < turts)
		printf("@_@");
	else
		printf("-_-");
	system("pause");
	return 0;
}

*/

//----------------------------找规律法 1.0---------------------------------------

/*


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int time;
	scanf("%d", &time);
	getchar();

	if (time % 45 == 0 || time % 30 == 0)
	{ //平局的情形，这里把对90取余得0、30、60处理成对30取余得0
		printf("-_-");
		printf(" %d", time * 3);
	}
	else if (time % 90<30 || (time % 90<60 && time % 90>45))
	{ //兔子赢的区间，赛跑时间过了(time/90)个周期
		printf("^_^");
		if (time % 90<10)
			printf(" %d", 270 * (time / 90) + (time % 90) * 9);
		else if (time % 90<30) //兔子在睡觉
			printf(" %d", 270 * (time / 90) + 90);
		else if (time % 90<50)
			printf(" %d", 270 * (time / 90) + 135 + (time % 90 - 45) * 9);
		else //兔子还是在睡觉
			printf(" %d", 270 * (time / 90) + 180);
	}
	else //乌龟赢的情形，由于乌龟始终匀速行进，路程很好处理
	{
		printf("@_@");
		printf(" %d", time * 3);
	}
	system("pause");
	return 0;
}

*/



//====================   规律法 自己打===================================

/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int t, len,t_last;
	scanf("%d", &t);
	len = 0;
	len = (t / 90) * 270;
	t_last = t % 90;//最后一个时间段 
	if (  (t_last > 30 && t_last<45) || (t_last>60 && t_last < 90)  )
	{
		printf("@_@ %d", len + 3 * t_last);
	}
	else if (t_last == 0 || t_last == 30 || t_last == 45 || t_last == 60)
	{
		printf("-_- %d", 3 * t);
	}
	else
	{
		if (t_last>0 && t_last < 10)
			printf("^_^ %d", len + t_last * 9);
		else if (t_last>10 && t_last < 30)
			printf("^_^ %d", len + 90);
		else if (t_last>45 && t_last < 50)
			printf("^_^ %d", len + 135+(t_last-45)*9);
		else
			printf("^_^ %d", len + 180);
	}
	system("pause");
	return 0;
}


*/

//================================真实模拟法==========================

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{

	system("pause");
	return 0;
}

*/

//======================================from he zong qing .mo ni=============


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int T, tz = 0, wg = 0, i;
	scanf("%d", &T);
	wg = 3 * T;
	if (T>10)
	{										//时间在十分钟以上
		tz = 90;							//开始时兔子的距离
		for (i = 10; i<T; i += 10)
		{									//对休息和奔跑分情况，兔子跑完后比较
			if (tz>3 * i)
			{								//休息的话，比较之后若>T，break；
				i += 20;
				if (i + 10 >= T)
				{
					break;
				}
			}
			else
			{									 //兔子不比乌龟快
				if (i + 10 <= T)
				{
					tz += 90;
				}
				else{
					tz += 9 * (T - i);
				}
			}
		}
	}
	else
	{											//		时间在十分钟以下
		tz = 9 * T;
	}
	if (tz>wg)
	{
		printf("^_^ %d\n", tz);
	}
	if (tz == wg)
	{
		printf("-_- %d\n", wg);
	}
	if (wg>tz)
	{
		printf("@_@ %d\n", wg);
	}
	return 0;
}

*/