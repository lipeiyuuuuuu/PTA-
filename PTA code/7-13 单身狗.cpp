//-----------------------------------------------------------------------


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>
void sort(unsigned long *pnot, unsigned long not);
long search(unsigned long  *p, unsigned long n, unsigned long id);
int judge_pt(unsigned long d, unsigned long *p, unsigned long *pcom, unsigned long com);
int judge_odd(unsigned long i);
int main()
{
	unsigned long n,*p,lover_s,i,com,*pcom,*pnot,not=0;
	scanf("%ld", &n);
	lover_s = 2 * n;//��������
	if ((p = (unsigned long *)malloc(lover_s*sizeof(int))) == NULL)//���봢������id���ڴ�
	{
		printf("not to able alloc memory! (lover)\n");
	}
	for (i = 0; i < lover_s; i++)
	{
		scanf("%ld", p + i);
	}
	scanf("%ld", &com);
	if (com == 0)//����μ�����Ϊ0  �������  �˳�����
	{
		system("pause");
		return 0;
	}
	if ((pcom = (unsigned long *)malloc(com*sizeof(int))) == NULL)//���봢��μ��ɶ�ID ���ڴ�
	{
		printf("not to able alloc memory!  (com)\n");
	}
	if ((pnot = (unsigned long *)malloc(com*sizeof(int))) == NULL)//���봢�浥��ID ���ڴ�
	{
		printf("not to able alloc memory! (not)\n");
	}
	for (i = 0; i < com; i++)//����μ��ɶԵ�ID
	{
		scanf("%ld", pcom + i);
	}
	if (n == 0)//���¶���Ϊ0  ��������вμ��Ŷӵ�ID  ���˳�����
	{
		printf("%ld", pcom[0]);
		for (i = 1; i < com; i++)
		{
			printf(" %ld", pcom[i]);
		}
		return 0;
	}
	long t;
	for (i = 0; i < com; i++)
	{
		t = search(p, n, *(pcom + i));// ������ID ������   ������������-1    ������������������ID�е�λ�� 
		if (t == -1)					
		{
			*(pnot+not) = *(pcom + i);//�������µı��� not ����Ϊû�а��µ�����
			not++;					//������������һ
		}
		else if (judge_pt(t, p, pcom, com))// �ж��ж������  �����������û��
		{
			*(pnot+not) = *(pcom + i);//�������û�����˵�ID
			not++;
		}
	}
	sort(pnot, not);//����������ID����
	if (not>=1)//һ��Ϊ����ʽ���
	printf("%ld\n%05ld", not, *pnot);
	for (i = 1; i < not;i++)
	{
		printf(" %05ld", *(pnot+i));
	}
	printf("\n");
	system("pause");
	return 0;
}
long search(unsigned long  *p, unsigned long n, unsigned long id)//����
{
	unsigned long i;
	for (i = 0; i < n; i++)
	{
		if ((*(p + 2 * i) == id) )
			return 2 * i;
		else if (*(p + 2 * i + 1) == id)
			return 2*i+1;         
	}
	return -1;
}
int judge_pt(unsigned long d, unsigned long *p, unsigned long *pcom, unsigned long com)//�ж�partner ��û��
{
	if (judge_odd(d)==0)//d Ϊ�ڴ�������ID �ڴ��е�λ��  ������d���� d���� 0  ��  2*i+1
	{
		if (search(pcom, com, *(p + d + 1)) != -1)//�ڲμ��ɶԵ���������  ���������򷵻�  -1
		return 0;
	}
	else
	{
		if (search(pcom, com, *(p + d - 1)) != -1)
			return 0;
	}
	return 1;//�������ķ���  1
}
int judge_odd(unsigned long i)//�ж�����ż��
{
	if(i == 0)
	return 0;
	if (i % 2 == 0)
		return 0;
	return 1;
}
void sort(unsigned long *pnot, unsigned long not)//�Ե���ID����  
{
	unsigned long i=0 , j =0,t;
	int flag ;
	for (i = 0; i < not; i++)
	{
		flag = 1;
		for (j = 0; j < not-1; j++)
		{

			if (*(pnot+j)>*(pnot + j+1))
			{
				flag = 0;
				t = *(pnot+j);
				*(pnot+j) = *(pnot + j+1);
				*(pnot + j+1) = t;
			}
		}
		if (flag)
			break;
	}
}


*/

//------------------------wang da.c-----------------
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<cstdio>
#include<cstring> 
#define N 100000
using namespace std;
int p[N],p1[N];
int n,m,a,b;
int main(){
	memset(p,0,sizeof(p)); 
	scanf("%d",&n);
	for(int i=0 ;i<n ;i++){
		scanf("%d%d",&a,&b);
		p[a]=b; p[b]=a;
	}
	scanf("%d",&m);
	for(int i=0 ;i<m ;i++){
		scanf("%d",&p1[i]);
	}
	for(int i=0 ;i<m ;i++){
		if(p[p1[i]]==0){
			p[p1[i]]=-1;
		}
		else if(p[p1[i]]==1){
		}
		else if(p[p1[i]]==-1){
		}
		else{
			for(int j=i+1 ;j<m ;j++){
				if(p[p1[i]]==p1[j]){
					p[p1[i]]=1; p[p1[j]]=1;
					break;
				}
			}
			if(p[p1[i]]!=1) p[p1[i]]=-1;
		}
	}
	int cnt = 0;
	for(int i=0 ;i<N ;i++){
		if(p[i]==-1){
			cnt++;
		}	
	}
	printf("%d\n",cnt);
	int flag =1;
	for(int i=0 ;i<N ;i++){
		if(p[i]==-1){
			if(flag){
				flag=0;
				printf("%05d",i);
			}else{
				printf(" %05d",i);
			}
		}
	}
	system("pause");
	return 0;
}
*/

/////-----------------------------------.cpp-----------------------------------------

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
const int N=11000;
int a[N];
int b[N];
int main()
{
	map<int,int > mp;     //�����µı���໥��Ӧ 
	set<int > s;          //�����μӵ����� 
	set<int > p;          //�浥������� 
	int n,i,m,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		mp[x]=y;          //�����µı���໥��Ӧ 
		mp[y]=x;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		{
			s.insert(a[i]);       ////�����μӵ�����  
		}
	}
	for(i=0;i<m;i++)
	{
		int A=mp[a[i]];
		if(s.find(A)==s.end())    //����������ڼ�����û�ҵ� 
		{
			p.insert(a[i]);      //�ŵ��µļ����� 
		}
		else
		{
			continue;
		}
	}
	cout<<p.size()<<endl;        //�������ĸ��� 
	set<int >::iterator it;
	for(it=p.begin();it!=p.end();it++)
	{
		if(it!=p.begin())
		{
			cout<<" ";
		}
		printf("%05d",*it);
	}
	system("pause");
	return 0;
}


*/

