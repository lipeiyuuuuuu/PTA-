/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1002
int main()
{
	int h,l;
	char gw[100][N];
	scanf("%d",&h);
	getchar();
	char scen[N];
	gets(scen);
	int len=strlen(scen);
	l=(len+1)/h;
	if((len+1)%h!=0)
	{
		l++;
	}
	if(l>1&&len%h==0)
	{
		l--;
	}
	int i,j;
	int p=0;
	if(h==1)
	{
		for(i=len-1;i>=0;i--)
		printf("%c",scen[i]);
	}
	else
	{
		
		for(i=l-1;i>=0;i--)//lie you xian
		{
			for(j=0;j<h;j++)
			{
				if(len>0)
				gw[i][j]=scen[p];
				else if(p>=len)
				gw[i][j]=' ';
				len--;
				p++;
	//			printf("-------\n");
			}
		}
	//	system("pause");
		for(i=0;i<h;i++)
		{
			
			for(j=0;j<l;j++)
			{
				printf("%c",gw[j][i]);
			}
			printf("\n");
		}
	}	
	return 0;
}
*/