/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100010
int main()
{
	int min_bei=0, ln_1[N], deep[N], mbe, i, dep_t, index_to_num;//mbe-menber ��Ա���� index_to_num �±�����Ӧ��ֵ 
	scanf("%d", &mbe);
	for (i = 0; i<mbe; i++)
	{
		scanf("%d", &ln_1[i]);//--------------------------------�����Ա
	}
	for (i = 1; i<=mbe; i++)
	{
		dep_t = 1;//��¼������
		index_to_num = i;//��Ŵ�һ��ʼ 
		//�����ż��丸ĸ
		while (ln_1[index_to_num-1] != -1)//�����ŵĸ�ĸ ����-1 һֱѭ��
		{
			dep_t++;//ѭ����� ����
			index_to_num = (ln_1[index_to_num-1]);///���ػ�ñ��
		}
		deep[i-1] = dep_t;//��¼���  ����
		if (dep_t>min_bei)
			min_bei = dep_t;//�����С����
	}
	printf("%d\n", min_bei);
	int flag = 1;
	for (i = 0; i < mbe; i++)
	{
		if (deep[i] == min_bei)
		{
			if (flag)
			{
				printf("%d", 1 + i);//�����С���� ��Ӧ�ı��
				flag = 0;
			}
			else
			{
				printf(" %d", 1 + i);
			}
		}
	}
	system("pause");
	return 0;
}


*/



/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#define N 100010
int main()
{
	int minn[55], min_flag,min_num=0;
	//����һ����¼��С���ݵ�����
	int min_bei=0, ln_1[N], deep[N], mbe, i, dep_t, index_to_num;//mbe-menber ��Ա���� index_to_num �±�����Ӧ��ֵ 
	scanf("%d", &mbe);
	for (i = 0; i<mbe; i++)
	{
		scanf("%d", &ln_1[i]);//--------------------------------�����Ա
	}
	for (i = 1; i<=mbe; i++)
	{
		dep_t = 1;//��¼������
		index_to_num = i;//��Ŵ�һ��ʼ 
		//�����ż��丸ĸ
		while (ln_1[index_to_num-1] != -1)//�����ŵĸ�ĸ ����-1 һֱѭ��
		{
			dep_t++;//ѭ����� ����
			index_to_num = (ln_1[index_to_num-1]);///���ػ�ñ��
		}

		deep[i-1] = dep_t;//��¼���  ����
		if (dep_t == min_bei)
		{
			minn[min_num] = i;
		//	printf("%d-----%d\n",min_num ,i);
			min_num++;
		}
		else if (dep_t > min_bei)//�и�С����
		{
		//	printf("%d-----%d\n", min_num, i);
			min_bei = dep_t;//�����С����
			min_num = 0;
			minn[min_num] = i;
			min_num++;
		}
	}
	printf("%d\n", min_bei);
	int flag = 1;
	printf("%d", minn[0]);
	for (i = 1; i < min_num; i++)
		printf(" %d", minn[i]);
	system("pause");
	return 0;
}



*/