/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 22
int main()
{
	int n, m;
	scanf("%d %d", &m, &n);//m�� n��
	getchar();
	char c;
	int life[N][N] = { 0 };
	int x[410], y[410];
	int i, j;
	for (i = 0; i < m; i++)//�������ӵ�ͼ
	{
		for (j = 0; j < n; j++)
		{
			scanf("%c", &c);
			if (c != '\n')
			{
				if (c == '#')//��¼��������  #�������ӵĵط� ����ֵΪһ
				{
					life[i][j] = 2;
				}
				else
				{
					life[i][j] = 0;
				}
			}
			else//��ĩβ�Ľ����� \n ������һ������ �˲���Ϊ��������������׼�� 
			{
				j--;
			}
		}
	}
	int num;
	scanf("%d", &num);
	for (i = 0; i < num; i++)//�����ڵ�����   
	{
		scanf("%d %d", &x[i], &y[i]);//#������
	}
	int dead=0;
	for (i = 0; i < num; i++)//ѭ��һ��  ���һ��  ɱ��Ч��   ��ͼ m �� n ��
	{
	int a, b;
		dead = 0;
		if (y[i] != 0     && --life[x[i]][y[i] - 1] == 0)//����
			dead++;
		if (y[i] != n - 1 && --life[x[i]][y[i] + 1] == 0)//����
			dead++;
		if (x[i] != 0     && --life[x[i] - 1][y[i]] == 0)//����
			dead++;
		if (x[i] != m - 1 && --life[x[i] + 1][y[i]] == 0)//����
			dead++;
		if (life[x[i]][y[i]] == 2 || life[x[i]][y[i]] == 1)
		{
			life[x[i]][y[i]] = 0;
			dead++;
		}
		printf("%d\n", dead);
	}
	system("pause");
	return 0;
}

*/


/*

#include<stdio.h>

int main(void){

	int m, n;

	scanf("%d %d", &m, &n);

	int map[m][n];

	char save;

	//ѭ�������ά���飬ʹ��ascii���ʾ 

	for (int i = 0; i<m; i++)

	for (int j = 0; j<n; j++){

		scanf("%c", &save);

		if (save == '\n'){

			j--;

		}
		else map[i][j] = save - '0';

	}

	//�����ڵ�

	int boom;

	scanf("%d", &boom);

	int atk[boom][2];

	for (int i = 0; i<boom; i++){

		scanf("%d %d", &atk[i][0], &atk[i][1]);

	}

	//���䰡

	int sum = 0;

	for (int i = 0; i<boom; i++){

		map[atk[i][0]][atk[i][1]] *= 4;//�м� 

		if (atk[i][0] != 0)map[atk[i][0] - 1][atk[i][1]] *= 2;//����

		if (atk[i][0] != m - 1) map[atk[i][0] + 1][atk[i][1]] *= 2;//���� 

		if (atk[i][1] != 0) map[atk[i][0]][atk[i][1] - 1] *= 2;//���� 

		if (atk[i][1] != n - 1) map[atk[i][0]][atk[i][1] + 1] *= 2;//����

		if (map[atk[i][0]][atk[i][1]] <= -52){

			sum++;

			map[atk[i][0]][atk[i][1]] = 0;

		}

		if (map[atk[i][0] - 1][atk[i][1]] <= -52){

			sum++;

			map[atk[i][0] - 1][atk[i][1]] = 0;

		}

		if (map[atk[i][0] + 1][atk[i][1]] <= -52){

			sum++;

			map[atk[i][0] + 1][atk[i][1]] = 0;

		}

		if (map[atk[i][0]][atk[i][1] - 1] <= -52){

			sum++;

			map[atk[i][0]][atk[i][1] - 1] = 0;

		}

		if (map[atk[i][0]][atk[i][1] + 1] <= -52){

			sum++;

			map[atk[i][0]][atk[i][1] + 1] = 0;

		}

		printf("%d\n", sum);

		sum = 0;

	}

}



*/