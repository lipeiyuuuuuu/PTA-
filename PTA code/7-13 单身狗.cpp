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
	lover_s = 2 * n;//情侣总数
	if ((p = (unsigned long *)malloc(lover_s*sizeof(int))) == NULL)//申请储存情侣id的内存
	{
		printf("not to able alloc memory! (lover)\n");
	}
	for (i = 0; i < lover_s; i++)
	{
		scanf("%ld", p + i);
	}
	scanf("%ld", &com);
	if (com == 0)//如果参加人数为0  则无输出  退出程序
	{
		system("pause");
		return 0;
	}
	if ((pcom = (unsigned long *)malloc(com*sizeof(int))) == NULL)//申请储存参加派对ID 的内存
	{
		printf("not to able alloc memory!  (com)\n");
	}
	if ((pnot = (unsigned long *)malloc(com*sizeof(int))) == NULL)//申请储存单身狗ID 的内存
	{
		printf("not to able alloc memory! (not)\n");
	}
	for (i = 0; i < com; i++)//输入参加派对的ID
	{
		scanf("%ld", pcom + i);
	}
	if (n == 0)//情侣对数为0  则输出所有参加排队的ID  并退出程序
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
		t = search(p, n, *(pcom + i));// 在情侣ID 中搜索   搜索不到返回-1    若搜索到返回在情侣ID中的位置 
		if (t == -1)					
		{
			*(pnot+not) = *(pcom + i);//将无情侣的保存 not （即为没有伴侣单身狗）
			not++;					//单身狗计数器加一
		}
		else if (judge_pt(t, p, pcom, com))// 判断有对象的人  这次他对象来没来
		{
			*(pnot+not) = *(pcom + i);//保存对象没来的人的ID
			not++;
		}
	}
	sort(pnot, not);//将单生狗的ID排序
	if (not>=1)//一下为按格式输出
	printf("%ld\n%05ld", not, *pnot);
	for (i = 1; i < not;i++)
	{
		printf(" %05ld", *(pnot+i));
	}
	printf("\n");
	system("pause");
	return 0;
}
long search(unsigned long  *p, unsigned long n, unsigned long id)//搜索
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
int judge_pt(unsigned long d, unsigned long *p, unsigned long *pcom, unsigned long com)//判断partner 来没来
{
	if (judge_odd(d)==0)//d 为在储存情侣ID 内存中的位置  （即第d个） d属于 0  —  2*i+1
	{
		if (search(pcom, com, *(p + d + 1)) != -1)//在参加派对的人中搜索  搜索不到则返回  -1
		return 0;
	}
	else
	{
		if (search(pcom, com, *(p + d - 1)) != -1)
			return 0;
	}
	return 1;//对象来的返回  1
}
int judge_odd(unsigned long i)//判断奇数偶数
{
	if(i == 0)
	return 0;
	if (i % 2 == 0)
		return 0;
	return 1;
}
void sort(unsigned long *pnot, unsigned long not)//对单身狗ID排序  
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
	map<int,int > mp;     //让情侣的编号相互对应 
	set<int > s;          //存来参加的人数 
	set<int > p;          //存单身的人数 
	int n,i,m,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		mp[x]=y;          //让情侣的编号相互对应 
		mp[y]=x;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		{
			s.insert(a[i]);       ////存来参加的人数  
		}
	}
	for(i=0;i<m;i++)
	{
		int A=mp[a[i]];
		if(s.find(A)==s.end())    //如果其情侣在集合中没找到 
		{
			p.insert(a[i]);      //放到新的集合中 
		}
		else
		{
			continue;
		}
	}
	cout<<p.size()<<endl;        //输出单身的个数 
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

