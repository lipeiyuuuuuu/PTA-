/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
#define K 1000
#define N2 10000
int main()
{
	char bian1[N*K], bian2[N2];//������ַ��ͱ��
	int  bi1[N*K], bi2[N2];//ת��Ϊ�����ͱ��
	int b1, b2;//��¼��������  ��ѯ����
	int n, pyq,pyrs;//pyq����Ȧ pyrs����Ȧ��������
	scanf("%d", &n);
	for (pyq = 1; pyq <= n; pyq++)
	{
		int k;
		scanf("%d", &k);
		for (pyrs = 1; pyrs <= k; pyrs++)
		{
			gets("bain1");
			b1[]=
		}
	}
	system("pause");
	return 0;
}
int ch_to_num(char ch)//�ַ�ת����
{

	return num;
}
int num_to_ch(int num)//����ת�ַ�
{
	return ch;
}
*/

///////////////----------------------------------------------------	//char cof[N][K];//Circle Of Friends

/*
char cof[5];//Circle Of Friends

int n;
scanf("%d", &n);
int i,p=0;
for (i = 0; i < n; i++)
{
int k,j;
scanf("%d", &k);
for (j = 0; j < k; j++)
{
gets(cof[i][j]);
//gets(cof[i][j]);
}

}
*/

//====================================================
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a[100000] = { 0 };
	int N, n, m, K, i;
	int sum = 0;
	scanf("%d", &N);
	int N1 = N;
	while (N1--)
	{
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &m);
			//������Щֻ��һ���˵�����Ȧ�ظ���Ӳ�����Ӱ��
			if (n != 1)
				a[m] += n;
		}
	}
	scanf("%d", &K);
	int w = K;
	while (w--)
	{
		scanf("%d", &m);
		if (a[m] == 0)//û�п�����Ȧ��������  
		{
			if (sum != 0) printf(" ");
			printf("%05d", m);//ע�������ʽ
			a[m] = -1;//�����α����
			sum++;
		}
	}
	if (sum == 0) printf("No one is handsome");
	printf("\n");
	system("pause");
	return 0;
	\
}
*/

