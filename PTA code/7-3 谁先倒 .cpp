/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
	int ajl, bjl, n, a=0, b=0, i,ah,aj,bh,bj;
	scanf("%d %d", &ajl, &bjl);
	scanf("%d", &n);
	int gc[N][4];
//	printf("---------%d\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &gc[i][0], &gc[i][1], &gc[i][2], &gc[i][3]);
	}
	for (i = 0; i < n; i++)
	{
		aj = gc[i][0];
		ah = gc[i][1];
		bj = gc[i][2];
		bh = gc[i][3];
		//printf("%d %d %d %d-------\n", gc[i][0], gc[i][1],gc[i][2], gc[i][3]);
		//printf("%d %d %d----------\n", ah, aj + bj, bh);
		//printf("-----------\n");
		if ((ah == aj + bj&&bh == aj + bj) || (ah != aj + bj&&bh != aj + bj))
			;
		else if (ah != aj + bj&&bh == aj + bj)
			b++;
		else if (ah == aj + bj&&bh != aj + bj)
			a++;
		if (a > ajl)
		{
			printf("A\n%d", b);
			break;
		}
		if (b > bjl)
		{
			printf("B\n%d", a);
			break;//如果没有break； 则倒下后将不会停止数据的模拟，致使结果不准确
		}
	}
	system("pause");
	return 0;
}


*/