/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#define N 20
int main()
{
int flag = 0;
int n, x;
int i;
int a[N];
scanf("%d %d", &n, &x);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
for (i = 0; i < n; i++)
{
if (a[i] == x)
{
flag = 1;
printf("%d", i);
break;
}
}
if (flag == 0)
{
printf("Not Found");
}
system("pause");
return 0;
}
*/