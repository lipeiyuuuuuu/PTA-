/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAXN 20
void CountOff(int n, int m, int out[]);
int main()
{
	int out[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	CountOff(n, m, out);
	for (i = 0; i < n; i++)
		printf("%d ", out[i]);
	printf("\n");
	system("pause");
	return 0;
}
void CountOff(int n, int m, int out[])
{
	int i, shu, j = 0, c;
	for (i = 0; i < n; i++)
	{
		out[i] = 0;
	}
	i = 1;
	while (i <= n)//xun huan yi ci tui chu yi ge ren 
	{
		shu = 0;
		for (c = 0; c < m;)//wan cheng yi zheng ci xun huan M ge ren bao shu  ,mei ci cong 0 kai shi 
		{
			if (out[j] == 0)
			{
				shu++;//bao chu de shu wei shu++l
				c++;
			}
			if (shu == m)
			{
				out[j] = i;
			}
			j = (j + 1) % n;
		}
		i++;
	}
}


*/


/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAXN 20
void CountOff(int n, int m, int out[]);
int main()
{
	int out[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	CountOff(n, m, out);
	for (i = 0; i < n; i++)
		printf("%d ", out[i]);
	printf("\n");
	system("pause");
	return 0;
}
void CountOff(int n, int m, int out[])
{
	int i = 0, z = 0, h, a[MAXN];//�������i���ܼ���������z����������������h��˳�����������a�����飩
	while (i<n)
	{
		a[i] = i + 1;
		i++;
	}
	i = 0;//�Ȱ����������
	for (h = 0; h<n;)
	{
		if (a[i] != 0)
			z++;//ģ�ⱨ�����̣�zҪ��0�����������ܱ����Σ�ZΪ3��׼ȷ����
		if (z == m)//����������mʱ�����Ǹ��Ƴ�������ˣ������Ƴ�����
		{
			h++;
			out[i] = h;
			z = 0;//����������
			a[i] = 0;//��Ϊ��1������������0�������Ƴ��ļ�Ϊ0������ɾ������
		}
		i++;//�ж�����һ����������
		if (i == n)//��ֹi���
			i = 0;
	}
}*/
//------------------------------------------------------------------------------------------------

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAXN 20
void CountOff(int n, int m, int out[]);
int main()
{
	int out[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	CountOff(n, m, out);
	for (i = 0; i < n; i++)
		printf("%d ", out[i]);
	printf("\n");
	system("pause");
	return 0;
}
void CountOff(int n, int m, int out[])
{
	int bian[MAXN],  i;//bian[] ����û���˳��ı��
	int xiabiao[MAXN];
	for (i = 1; i <= n; i++)
	{
		bian[i] = i;
		xiabiao[i] = i;
	}
	int x, y;
	int iout = 0,isaybian=1;
	for (x = 1;x<=n; x++)
	{
		for (y = 1; y < 4; y++)
		{
			if (y == 3)
			{
				do//��¼�����ı�ź�  ��bian���ñ�š�Ϊ0
				{
					if (isaybian == n&&bian[isaybian] == 0)//bian[n] Ϊ��
					{
						isaybian = 1;
					}
					else if (isaybian == n&&bian[isaybian] != 0)//bian[n] ��Ϊ��
					{
						out[iout] = bian[isaybian];
						bian[isaybian] = 0;
						iout++;
						isaybian = 1;
						break;
					}
					else if (bian[isaybian] != 0)
					{
						out[iout] = bian[isaybian];
						bian[isaybian] = 0;
						iout++;
						isaybian++;
						break;
					}
					else//bian[*] �� ��*��Ϊn
					{
						isaybian++;
					}
				} while (bian[isaybian] != 0);
				if (iout == n - 1) break;
			}
			else
			{
				do
				{
						if (isaybian == n&&bian[isaybian]==0)
						{
							isaybian = 1;
						}
						else if (isaybian == n&&bian[isaybian] != 0)
						{
							isaybian = 1;
							break;
						}
						else if (bian[isaybian] != 0)
						{
							isaybian++;
							break;
						}
						else//bian[*]Ϊ��
						{
							//printf("-");
							//if (out[3] != 0)
							//{
								isaybian++;
							//}
						}
				} while (bian[isaybian] != 0);
			}
		}
	}*/
	/*	int  j;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <=n; j++)
		{
			if (out[i] == xiabiao[j])
			{
				xiabiao[j] = i + 1;
				printf("%d %d %d \n",j, xiabiao[j], i + 1);
				break;
			}
		}
	}
		for (i = 0; i < n; i++)
	{
		//out[i] = xiabiao[i+1];
		printf("%d ", xiabiao[i + 1]);
	}
//	printf("\n");*/



/*


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 30
int main()
{
	int n, m, a[N] = { 0 };
//	printf("plesse input the student number(no more than 30) and out flag:");
//	printf("\nplease input student number :");
	scanf("%d", &n);
//	printf("\please intput the out number:");
	scanf("%d", &m);
	int i=0,out_count=1,baoshu=0;
	while (out_count != n+1)
	{
	
		if (++baoshu == m + 1) baoshu = 1;
		if (baoshu == m&&a[i] == 0)
			a[i] = out_count++;
		else if (a[i] != 0)
			baoshu--;
		if (++i == n) i = 0;
	}
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(" %d", a[i]);
	}
	system("pause");
	return 0;
}

*/