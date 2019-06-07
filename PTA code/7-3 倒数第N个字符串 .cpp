/*

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define L 7
int main()
{ 
	int l, n, num[L], i;
	scanf("%d %d", &l, &n);
	for (i = 0; i<l; i++)
		num[i] = 0;
	num[0] = (n % 26) - 1;
	//	printf("%d",num[0]);
	n /= 26;
	for (i = 1; i<l; i++)
	{
		num[i] = n % 26;
		n /= 26;
		if (n == 0)
			break;
	}
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", 'z' - num[i]);
	}
	system("pause");
	return 0;
}




#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define L 7
int main()
{
	int l, n, num[L], i;
	scanf("%d %d", &l, &n);
	for (i = 0; i<l; i++)
		num[i] = 0;
	num[0] = (n % 26);//ÊôÓÚ 0 µ½ 25 
	//	printf("%d",num[0]);
	n /= 26;
	for (i = 1; i<l; i++)
	{
		num[i] = n % 26;
		n /= 26;
		if (n == 0)
			break;
	}
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", 'z' - num[i]);
	}
	system("pause");
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int l, n, a[7] = { 0 }, i;
	scanf("%d %d", &l, &n);
	if (n == 0)
	for (i = 0; i<l; i++)
	{
		printf("%c", 'a');
		return 0;
	}

	a[0] = n % 26 - 1;
	if (a[0] == -1)
		a[0] = 25;
	n /= 26;
	for (i = 1; n>0; i++)
	{
		if (n % 26 != 0)
			a[i] = n % 26;
		else a[i] = 25;
		n /= 26;
	}
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", 'z' - a[i]);
	}
	system("pause");
	return 0;
}


*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int l, n;
	scanf("%d %d", &l, &n);
	int i26[7];
	int i;
	for (i = 0; i < l; i++)
	{
		i26[i] = 'a';
	}
	system("pause");
	return 0;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	int l, n,i;
	scanf("%d %d", &l, &n);
	long long a[7],t=pow((double)26,l)-n;
	for (i = 0; i < l; i++)
	{
		a[i]=t % 26;
		t /= 26;
	}
	for (i = l-1; i>=0; i--)
	{
		printf("%c", a[i] + 'a');
	}
	system("pause");
	return 0;
}


*/
