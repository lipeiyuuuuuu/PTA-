/*



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
	int num_eat=0, num_dead=0;
	char device[N];
	int i=0,len;
	while (scanf("%c", &device[i]) &&device[i]!='$')
	{
//		printf(" %c please:\n",device[i]);
		i++;
	}
	len = i;
//	printf("%d", i);
	int flag = 0;
	for (i = 0; i < len; i++)
	{
		if (flag == 0)//����ʱ
		{
			if (device[i] == 'X')
			{
				flag = 1;
				printf("U");
			}
			else if (device[i] == 'T')
			{
				flag = 2;
				num_dead++;
				printf("D");
			}
			else if (device[i] == 'C')
			{
				flag = -2;
				num_eat++;
				printf("!");
			}
			
		}
		else if (flag==1||flag==2)//һ������  ���� killed
		{
			flag--;
			printf("-");
		}
		else if (flag ==-2)//�Ե������ĵ�һ��
		{
			if (device[i] == 'X')
			{
				flag++;
				printf("U");
			}
			else if (device[i] == 'T')
			{
				flag++;
				num_dead++;
				printf("D");
			}
			else if (device[i] == 'C')
			{
				flag = -2;
				num_eat++;
				printf("!");
			}
		}
		else if (flag == -1)//�Ե������ĵڶ���
		{
			if (device[i] == 'X')
			{
				flag=1;
				printf("U");
			}
			else if (device[i] == 'T')
			{
				flag=2;
				num_dead++;
				printf("D");
			}
			else if (device[i] == 'C')
			{
				flag = -2;
				num_eat++;
				printf("!");
			}
		}
	}
	printf("\n%d", num_dead * 7 - num_eat * 3);
	system("pause");
	return 0;
}


*/