/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#define MAXSIZE 100
int indexOfMax(int *array, int size);
int main(){
	int num[MAXSIZE];
	int total;
	scanf("%d", &total);
	for (int i = 0; i<total; i++) scanf("%d", &num[i]);
	printf("%d\n", num[indexOfMax(num, total)]);
	system("pause");
	return 0;
}
int indexOfMax(int *array, int size)
{
	int imax = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		if (array[imax] < array[i])
			imax = i;
	}
	return imax;
	}*/