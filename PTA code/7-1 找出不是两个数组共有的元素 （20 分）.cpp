/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
int find(int a[], int n, int k);
int main()
{
int m, n;
int line1[21];
int line2[21];
int flag;
int i1 = 0, i2 = 0;
char c = 0;
scanf("%d", &m);
for (i1 = 0; i1 < m; i1++)
{
scanf("%d", &line1[i1]);
}
scanf("%d", &n);
for (i2 = 0; i2 < n; i2++)
{
scanf("%d", &line2[i2]);
}//0k
int differ[42];
int idiffer = 0;
int i, j;
for (i = 0; i < m;i++)
{
flag = 1;
for (j = 0; j < n; j++)
{
if (line1[i] == line2[j])
{
flag = 0;
break;
}
}
if (flag == 1 && (find(differ, idiffer, line1[i])))
{
differ[idiffer] = line1[i];
idiffer++;
}
}
for (i = 0; i < n; i++)
{
flag = 1;
for (j = 0; j < m; j++)
{
if (line2[i] == line1[j])
{
flag = 0;
break;
}
}
if (flag == 1 && (find(differ, idiffer, line2[i])))
{
differ[idiffer] = line2[i];
idiffer++;
}
}
printf("%d", differ[0]);
for (i = 1; i < idiffer; i++)
{
printf(" %d", differ[i]);
}
system("pause");
return 0;
}
int find(int a[], int n, int k)
{
int i = 0;
int flag2=1;
for (i = 0; i < n; i++)
{
if (k == a[i])
flag2 = 0;
}
return flag2;
}
*/