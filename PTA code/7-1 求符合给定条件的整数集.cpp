
//------------------------------------------------������-----------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,d;
	scanf("%d", &a);
	b = a + 1, c = a + 2; d = a + 3;
	printf("%d %d %d %d %d %d\n", a*100 + b*10 +c , a*100 + b*10 + d, a*100 + c*10 +b , a*100 + c*10 +d , a*100 + d*10 + b, a*100 + d*10 + c );
	printf("%d %d %d %d %d %d\n", b*100 + a*10 +c , b*100 + a*10 + d, b*100 + c*10 + a, b*100 +c *10 +d , b*100 + d*10 +a ,b *100 + d*10 +c );
	printf("%d %d %d %d %d %d\n",c *100 + a*10 +b , c*100 + a*10 +d , c*100 +b *10 + a, c*100 + b*10 + d, c*100 + d*10 + a, c*100 +d *10 + b);
	printf("%d %d %d %d %d %d\n", d*100 + a*10 + b, d*100 + a*10 + c, d*100 + b*10 +a , d*100 + b*10 +c , d*100 + c*10 +a , d*100 + c*10 + b);
	system("pause");
	return 0;
}
*/





//---------------------------------------------ģ�ⷨ--------------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void cz_fz(int num[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	int i, j, k, m, t;
	int num[4], flag = 1,flag_2;				//flag_2   ÿ�����ָ���������  ��������һ��ʱ���üӿո�
	for (i = 0; i<4; i++)						//ѭ��һ�����������
	{
		cz_fz(num, n);							//�����ʼ��
		num[i] = 0;								//��λȷ�����  ��ֵΪ0   �൱��ɾ������
		flag_2 = 0;
		for (j = 0; j<1; j++)
		{
			for (k = 0; k<4; k++)				//ѭ��һ�����������  �����
			{
				if (num[k] != 0)				//�жϲ����ʮλ  �Լ���һλ��
				{
					printf("%d", n + i);		//�����λ
					printf("%d", num[k]);		//���ʮλ
					num[k] = 0;					//  ɾ��m[k]
					for (m = 0; m<4; m++)		//�����λ
					{
						if (num[m] != 0)
						{
							if (flag)			//flag ���Ϊһ��Ϊ һ�����ĵ�һ��  
							{
								printf("%d ", num[m]);//�����λ
								num[m] = 0;		 //  ɾ��num[m]  
								flag = 0;
								flag_2++;
							}
							else
							{
								t = num[m];		//������һ�� ʮλ��λ ��ͬ������    ��λ  
								num[m] = 0;
								flag = 1;
							}
						}
					}
					cz_fz(num, n);				//Ϊ�������һ������ ���� Ϊ��һ��ѭ����׼��
					num[i] = 0;					//ÿ�еİ�λ�ǹ̶���   �Ҳ����ܳ�����ͬ�еĸ�ʮλ��
					printf("%d%d%d", i + n, num[k], t);//���һ����  �ĺ�һλ
					flag_2++;
					if (flag_2%6!=0)           //��������һ��ʱ���üӿո�
						printf(" ");
				}
			}
		}
			printf("\n");

	}
	system("pause");
	return 0;
}
void cz_fz(int num[], int n)
{
	int i;
	for (i = 0; i<4; i++)
	{
		num[i] = n + i;
	}
}

*/




//----------------------------------------------------�д���---------------------------------------------------------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void cz_fz(int num[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	int i, j, k, m, t;
	int num[4], flag = 1;
	int flag_2=0;
	for (i = 0; i<4; i++)//ѭ��һ�����������
	{
		cz_fz(num, n);//�����ʼ��
		num[i] = 0;//��λȷ�����  ��ֵΪ0

		flag = 0;
		for (j = 0; j<1; j++)
		{
			for (k = 0; k<4; k++)//�жϲ����ʮλ  �Լ���һλ��
			{
				if (num[k] != 0)
				{
					printf("%d", n + i);//�����λ
					printf("%d", num[k]);//���ʮλ
					num[k] = 0;
					for (m = 0; m<4; m++)//�����λ
					{
						if (num[m] != 0)
						{
							if (flag)
							{
								printf("%d ", num[m]);//�����λ
								num[m] = 0;
								flag = 0;
								flag_2++;
							}
							else
							{
								t = num[m];//������һ�� ʮλ��λ ��ͬ������ ��λ  
								num[m] = 0;
								flag = 1;
							}
						}
					}
					cz_fz(num, n);
					num[i] = 0;
					printf("%d%d%d", i+n, num[k], t);
					flag_2++;
					if (flag_2 % 6 != 0)
						printf(" ");
//						printf(" %d ",flag_2);
				}
			}
		}
		printf("\n");




	}
	system("pause");
	return 0;
}
void cz_fz(int num[], int n)
{
	int i;
	for (i = 0; i<4; i++)
	{
		num[i] = n + i;
	}
}

*/
