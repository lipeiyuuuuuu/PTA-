/*����������΢����һ�����������ҳ�����1988�ֱ꣬��25�������4�����ֶ�����ͬ����ݡ���Ҳ����˵��ֱ��2013��Ŵﵽ��4�����ֶ�����ͬ����Ҫ�󡣱����������Ҫ���Զ���䡰�ҳ�����y�ֱ꣬��x�������n�����ֶ�����ͬ����ݡ���仰��
�����ʽ��
������һ���и����������y��Ŀ������в�ͬ���ֵĸ���n������y��[1, 3000]֮�䣬n������2����3����4��ע�ⲻ��4λ�����Ҫ��ǰ�油�㣬���繫Ԫ1�걻��Ϊ��0001�꣬��2����ͬ������0��1��
�����ʽ��
�������룬���x���ܴﵽҪ�����ݡ����ּ���1���ո�ָ�������β�����ж���ո����Ҫ��4λ�����ע�⣺��ν��n�����ֶ�����ͬ����ָ��ͬ������������n�����硰2013������Ϊ���㡰4λ���ֶ���ͬ������������������Ϊ����2λ��3λ���ֲ�ͬ��������
��������1��
1988 4
�������1��
25 2013
��������2��
1 2
�������2��
0 0001*/
//---------------------------------------------------------------------------------my1.0

//Ҫ��    1.�Ƚ����ֵ�ÿһλ���Ƿ���ͬ �����[1] �� ���� ����ݾ�����10^k��ȡ�� �õ�������������  
//[2]���ϸ�������ж����������˼�������.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int main()
{
	int n, x, y;
	scanf("%d %d", &y, &n);//����Y��  ��x�� ������n������ͬ
	int g, s, b, q,flag;
	for (x = 0;; x++)
	{
		g = (y + x) % 10;
		s = (y + x) /10% 10;
		b = (y + x) /100% 10;
		q = (y + x) /1000;
		if (g != s&&g != b && g != q&&s != b&&s != q&&b != q)
		{
			flag = 4;
			if (flag == n)
			{
				printf("g=%d s=%d b=%d q=%d\n%d\n", g, s, b, q,flag);
				break;
			}
		}
		else if (((g != s&&g != b &&s != q) && (q == g || q == s || q == b)) || ((g != s&&s != b &&b != g) && (b == g || b == s || b == q)) || ((g != q&&q != b &&b != g) && (s == g || s == q || s == b)) || ((q != s&&s != b &&b != q) && (g == q || g == s || g == b)))
		{
			flag = 3;
			if (flag == n)
			{
				printf("g=%d s=%d b=%d q=%d\n%d\n", g, s, b, q, flag);
				break;
			}
		}
		else if (((g == s&&b == q&&g != q) || (g == b&&s == q&&b != s) || (q == g&&s == b&&b != q)) || (g == s&&g == b&&g != q) || (g == b&&g == q&&g != s) || (g == s&&g == q&&g != b) || (s == b&&s == q&&s != g))
		{
			flag = 2;
			if (flag == n)
			{
				printf("g=%d s=%d b=%d q=%d\n%d\n", g, s, b, q, flag);
				break;
			}
			
		}
	}
	printf("%d %04d", x, y+x);
	system("pause");
	return 0;
}
*/
//--------------------------------------------------------------------------------CSDNCSDNCSDNCSDNCSDN

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <stdlib.h>
int getNum(int age);
int main()
{
	int age, num, i;
	scanf("%d%d", &age, &num);
	for (i = 0;; i++){
		if (getNum(age + i) == num)
			break;
	}
	printf("%d %04d", i, age + i);
	system("pause");
	return 0;
}
int getNum(int age)
{
	int a, b, c, d;
	int num[10] = { 0 };//��ʼ������Ϊ0
	a = age % 10;
	b = age / 10 % 10;
	c = age / 100 % 10;
	d = age / 1000;
	num[a]++;
	num[b]++;
	num[c]++;
	num[d]++;//���主��˼��    
	if (num[a] == 4 || num[b] == 4 || num[c] == 4 || num[d] == 4)
		return 1;                                                //�ĸ���ĸ��ͬ���� 1 ��sum�е�Ԫ�غ�Ϊһ
	if (num[a] == 3 || num[b] == 3 || num[c] == 3 || num[d] == 3)//return �൱��else  �����е���if  ��һ��������֮ǰ������ ������ͬ��
		return 2 ;                                               //��3����ĸ��ͬ   2  ��sum�е�Ԫ�غ�Ϊ��   //4����ĸ��ͬҲ���ϸ�����  ���ǵ�һ��if  �Ѿ��жϳ�4����ĸ��ͬ����1
	if (num[a] == 1 && num[b] == 1 && num[c] == 1 && num[d] == 1)//�ȼ���sum��Ԫ�غ�Ϊ4
		return 4;                                                //����ֵΪ4 ֻ����һ�����
	if (num[a] == 1 || num[b] == 1 || num[c] == 1 || num[d] == 1)
		return 3;//����ֵΪ2Ҳ�����������  ���ǵ���if�Ѿ��жϲ�Ϊ3 
	return 2;
}
*/
//-------------------------------------------------------------------------------------CSDNCSDNCSDNCSDNCSDN
//�ܾ����˼���
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int y, n;
	int a, b, c, d;//����λ���ϵ�ֵ��aΪǧλ��bΪ��λ��cΪʮλ��dΪ��λ
	int f[10];
	int x = 0;
	scanf("%d %d", &y, &n);
	for (int i = y; i<10000; i++)
	{
		a = i / 1000;
		b = i / 100 % 10;
		c = i % 100 / 10;
		d = i % 10;
		memset(f, 0, sizeof(f));//������f�����Ե�Ԫ�س�ʼ��Ϊ0  --- memset(f,0,sizeof(f))  ��f��ǰλ�ú��n���ֽ���0���
		/*void *memset(void *s, int ch, size_t n);
		�������ͣ�  ��s�е�ǰλ�ú����n���ֽ� ��typedef unsigned int size_t ���� ch �滻������ s ��
		memset����������һ���ڴ�������ĳ��������ֵ�����ǶԽϴ�Ľṹ�������������������һ����췽�� [1]  ��
		memset()����ԭ����extern void *memset(void *buffer, int c, int count) 
		buffer��Ϊָ���������,c���Ǹ���buffer��ֵ,count����buffer�ĳ���.  (�ǵò��Ǻŷ�б��*��)
		f[a] = 1;
		if (f[b] != 1)//��������в�����b ��f��b��=1���������b�ѳ��֣�
			f[b] = 1;
		if (f[c] != 1)
			f[c] = 1;
		if (f[d] != 1)
			f[d] = 1;//������С��������
		int sum = 0;
		for (int j = 0; j<10; j++)
		{
			sum = sum + f[j];
		}//��ʱsum����
		
		if (sum == n)
		{
			printf("%d %04d", i - y, i);//i-y ���伴ѭ������  i �����
			x++;
		}
	}
	system("pause");
	return 0;
}
//˼���ܽ᣺�����齫����0��9���ֵĸ���������������   ��ֻҪ�����ֳ����� ��Ӧ�±��Ԫ�ؼ�һ   
//�������Ԫ��֮�����  �õ���sum���ǲ�ͬ���ֵĸ���   ��������������ʼ������  ��������� ��Ӧ���� �����
*/
//---------------------------------------------------------------------------------my2.0
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n, x, y,sum;
	scanf("%d %d", &y, &n);//����Y��  ��x�� ������n������ͬ
	int g, s, b, q, flag,i;
	for (x = 0;; x++)
	{
		int f[10] = { 0 },sum=0;
		g = (y + x) % 10;
		s = (y + x) / 10 % 10;
		b = (y + x) / 100 % 10;
		q = (y + x) / 1000;
		f[g] = 1;
		if (f[s] != 1)
			f[s] = 1;
		if (f[b] != 1)
			f[b] = 1;
		if (f[q] != 1)
			f[q] = 1;
		for (i = 0; i < 10; i++)
		{
			sum += f[i];
		}
		if (sum == n)
		{
			printf("%d %04d", x, y + x);
			break;
		}
	}
	system("pause");
		return 0;
}
*/
