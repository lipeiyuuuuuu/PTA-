/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 22
int main()
{
	int n, m;
	scanf("%d %d", &m, &n);//m行 n列
	getchar();
	char c;
	int life[N][N] = { 0 };
	int x[410], y[410];
	int i, j;
	for (i = 0; i < m; i++)//输入蚊子地图
	{
		for (j = 0; j < n; j++)
		{
			scanf("%c", &c);
			if (c != '\n')
			{
				if (c == '#')//记录蚊子生命  #是有蚊子的地方 生命值为一
				{
					life[i][j] = 2;
				}
				else
				{
					life[i][j] = 0;
				}
			}
			else//行末尾的结束符 \n 读入下一行行首 此操作为重新输入行首做准备 
			{
				j--;
			}
		}
	}
	int num;
	scanf("%d", &num);
	for (i = 0; i < num; i++)//输入炮弹坐标   
	{
		scanf("%d %d", &x[i], &y[i]);//#有蚊子
	}
	int dead=0;
	for (i = 0; i < num; i++)//循环一次  输出一次  杀伤效果   地图 m 行 n 列
	{
	int a, b;
		dead = 0;
		if (y[i] != 0     && --life[x[i]][y[i] - 1] == 0)//左面
			dead++;
		if (y[i] != n - 1 && --life[x[i]][y[i] + 1] == 0)//右面
			dead++;
		if (x[i] != 0     && --life[x[i] - 1][y[i]] == 0)//上面
			dead++;
		if (x[i] != m - 1 && --life[x[i] + 1][y[i]] == 0)//下面
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

	//循环存入二维数组，使用ascii码表示 

	for (int i = 0; i<m; i++)

	for (int j = 0; j<n; j++){

		scanf("%c", &save);

		if (save == '\n'){

			j--;

		}
		else map[i][j] = save - '0';

	}

	//读入炮弹

	int boom;

	scanf("%d", &boom);

	int atk[boom][2];

	for (int i = 0; i<boom; i++){

		scanf("%d %d", &atk[i][0], &atk[i][1]);

	}

	//发射啊

	int sum = 0;

	for (int i = 0; i<boom; i++){

		map[atk[i][0]][atk[i][1]] *= 4;//中间 

		if (atk[i][0] != 0)map[atk[i][0] - 1][atk[i][1]] *= 2;//上面

		if (atk[i][0] != m - 1) map[atk[i][0] + 1][atk[i][1]] *= 2;//下面 

		if (atk[i][1] != 0) map[atk[i][0]][atk[i][1] - 1] *= 2;//左面 

		if (atk[i][1] != n - 1) map[atk[i][0]][atk[i][1] + 1] *= 2;//右面

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