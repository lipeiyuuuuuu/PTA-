/*7-5 �������� ��20 �֣�
�ڹ������ӽ������ܣ��ܳ���һ�������ܵ����ܵ��߿�����ؽ�����Ϣ���ڹ�ÿ���ӿ���ǰ��3�ף�����ÿ����ǰ��9�ף�
�������ڹ��ܵ��������ÿ϶�����Ӯ�ڹ꣬���ǣ�ÿ��10���ӻ�ͷ��һ���ڹ꣬�������Լ������ڹ꣬����·����Ϣ��ÿ����Ϣ30���ӣ�
���������10���ӣ����ڹ�ǳ�Ŭ����һֱ�ܣ�����Ϣ���ٶ��ڹ���������ͬһ���ͬһʱ�̿�ʼ���ܣ�����T���Ӻ��ڹ������˭�ܵÿ죿
�����ʽ��
������һ���и�������ʱ��T�����ӣ���
�����ʽ��
��һ������������Ľ�����ڹ�Ӯ���@_@������Ӯ���^_^��ƽ�������-_-�����1�ո������ʤ��������ľ��롣*/

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

//----------------------------�ҹ��ɷ� 1.0---------------------------------------

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
	{ //ƽ�ֵ����Σ�����Ѷ�90ȡ���0��30��60����ɶ�30ȡ���0
		printf("-_-");
		printf(" %d", time * 3);
	}
	else if (time % 90<30 || (time % 90<60 && time % 90>45))
	{ //����Ӯ�����䣬����ʱ�����(time/90)������
		printf("^_^");
		if (time % 90<10)
			printf(" %d", 270 * (time / 90) + (time % 90) * 9);
		else if (time % 90<30) //������˯��
			printf(" %d", 270 * (time / 90) + 90);
		else if (time % 90<50)
			printf(" %d", 270 * (time / 90) + 135 + (time % 90 - 45) * 9);
		else //���ӻ�����˯��
			printf(" %d", 270 * (time / 90) + 180);
	}
	else //�ڹ�Ӯ�����Σ������ڹ�ʼ�������н���·�̺ܺô���
	{
		printf("@_@");
		printf(" %d", time * 3);
	}
	system("pause");
	return 0;
}

*/



//====================   ���ɷ� �Լ���===================================

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
	t_last = t % 90;//���һ��ʱ��� 
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

//================================��ʵģ�ⷨ==========================

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
	{										//ʱ����ʮ��������
		tz = 90;							//��ʼʱ���ӵľ���
		for (i = 10; i<T; i += 10)
		{									//����Ϣ�ͱ��ܷ���������������Ƚ�
			if (tz>3 * i)
			{								//��Ϣ�Ļ����Ƚ�֮����>T��break��
				i += 20;
				if (i + 10 >= T)
				{
					break;
				}
			}
			else
			{									 //���Ӳ����ڹ��
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
	{											//		ʱ����ʮ��������
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