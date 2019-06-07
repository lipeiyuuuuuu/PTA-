/*7-2 发红包* （10 分）
某企业年终按员工业绩发红包，已知红包金额最多只有几百元。
请你编写程序，帮助出纳员根据金额往红包中装入张数最少的纸币。
注：纸币面额为100元、50元、20元、10元、5元、2元和1元。
输入格式
金额(以元为单位的整数)
输出格式
按钞票面额由大到小的顺序输出各种钞票的张数(参见输出样例)
输入样例
582
输出样例
100元: 5张
 50元: 1张
 20元: 1张
 10元: 1张
  5元: 0张
  2元: 1张
  1元: 0张*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int yb, ws, es, sk, wk, lk, yk;
	int sum;
	scanf("%d",&sum);
	yb = sum / 100;
	sum = sum - 100 * yb;
	ws = sum / 50;
	sum = sum - 50 * ws;
	es = sum / 20;
	sum = sum - 20 * es;
	sk = sum / 10;
	sum = sum - 10 * sk;
	wk = sum / 5;
	sum = sum - 5 * wk;
	lk = sum / 2;
	sum = sum - 2 * lk;
	yk = sum;
	printf("100元:%2d张\n 50元:%2d张\n 20元:%2d张\n 10元:%2d张\n  5元:%2d张\n  2元:%2d张\n  1元:%2d张",yb,ws,es,sk,wk,lk,yk);
	system("pause");
	return 0;
}
*/