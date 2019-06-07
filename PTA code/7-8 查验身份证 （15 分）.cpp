/*一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：
首先对前17位数字加权求和，权重分配为                                                                                    ：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；
然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：
Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2
现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。
输入格式：
输入第一行给出正整数N（≤100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。
输出格式：
按照输入的顺序每行输出1个有问题的身份证号码。这里并不检验前17位是否合理，
只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出All passed。*/
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 100
#define l 18
int main()
{
	double id[N][18];
	int n,i,j;
	int flag = 0;
	int flagi[N] = {0};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int sum = 0;
		unsigned long long  num;
		scanf("%llu", &num);
		for (j = 17; j >=0; j--)
		{
			id[i][j] = num % 10;
			num = num / 10;
		}
		sum = (int)id[i][0] * 0.07 + id[i][1] * 0.09 + id[i][2] * 0.1 + id[i][3] * 0.05 + id[i][4] * 0.08 + id[i][5] * 0.04 + id[i][6] * 0.02 + id[i][7] * 001. + id[i][8] * 0.06 + id[i][9] * 0.03 + id[i][10] * 0.07 + id[i][11] * 0.09 + id[i][12] * 0.1 + id[i][13] * 0.05 + id[i][14] * 0.08 + id[i][15] * 0.04 + id[i][16] * 0.02;
		if (sum % 11 != id[i][17])
		{
			flag++;
			flagi[i] = 1;
		}
	}
	if (flag == 0)
		printf("All passed");
	else
	{
		printf("%d", flag);
		for (i = 0; i <= 100; i++)
		{
			if (flagi[i] == 1)
			{
				for (j = 0; j < 18; j++)
				{
					printf("%d", id[i][j]);
				}
			}
		}
	}
	system("pause");
	return 0;
}
*/