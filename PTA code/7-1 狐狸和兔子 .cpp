/*


#define _CRT_SECURE_NO_WARNINGS
//���ò�֪��Ϊɶ  ����Ϊ�����ǲ��ᱻ�Ե� ż��ʱ�򱻳Ե�QAQ
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int judge(int h);
int main()
{
	int f=1, h,i=0,flag =0;//����������
	scanf("%d", &h);
	flag = judge(h);
	if (flag == 1)
	{
		printf("Fox");
	}
	else
	{
		printf("Hare");
	}
	system("pause");
	return 0;
}
int judge(int h)
{
	int flag = 0,f=1,i=0;
	while (1){
		if (f == h){//�˳�����1  ���ӱ���
			flag = 1;
			break;
		}
		//----------------------------------
		//�Ժ�����λ���ж�
		if (f == 30)
			f--;
		else if (f == 1)
			f++;
		else if (f < h)
			f++;
		else if (f>h)
			f--;
		//-------------------------------------
		//��������λ���ж�
		if (h == 30||h==29||h==28)//���ұ߽� ֻ������
			h -= 3;
		else if (h == 1||h==2||h==3)//����߽�ֻ������
			h += 3;
		else if (h-2==f||h-4==f)//��ǰ���Ӻ����λ�� ������������ᱻ�� ������
			h += 3;
		else if (h + 2 == f || h + 4 == f)//ԭ��ͬ��
			h -= 3;
		else if (h - 1 == f)//������������һ��  ��������������
			h -= 3;
		else if (h + 1 == f)//ԭ��ͬ��
			h += 3;
		else if (h > f)//��ͨλ��  ԽԶԽ��
			h += 3;
		else if (h < f)//��ͨλ��  ͬ��
			h -= 3;
		i++;
		if (i == 50)//������ʮ�����ж����Ӳ��ᱻ��
			break;
	}
	if (i == 50)
		flag = 0;
	return flag;
}


*/
