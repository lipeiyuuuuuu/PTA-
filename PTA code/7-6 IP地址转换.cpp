/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 33
int main()
{
	char ip[N];
	int ip_[4] = {0};
	gets(ip);
	int i, j;
	for (i = 0; i < 32;i++)
	{
		ip_[i / 8] += (ip[i]-'0') * pow(2, (double)7-i%8);
	}
	printf("%d.%d.%d.%d", ip_[0], ip_[1], ip_[2], ip_[3]);
	system("pause");
	return 0;
}

*/