/*



#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 510
int main()
{
	char m[10][6] = { { "0 " }, { "1,.?!" }, { "2ABC" }, { "3DEF" }, { "4GHI" }, { "5JKL" }, { "6MNO" }, { "7PQRS" }, { "8TUV" }, { "9WXYZ" } };
	char scen_aj[N];
	gets(scen_aj);
	//system("pause");
	int same, number = strlen(scen_aj), i, len_aj, num_aj;
	for (i = 0;  i < number;  ) //number������ĳ��� 
	{
		if (scen_aj[i] != ' ')
		{
			num_aj = 0;
			len_aj = strlen(m[scen_aj[i]-'0']);//��������
			while (scen_aj[i + num_aj] != ' '&&(i + num_aj) != number)
			{
				num_aj++;
			}
			//printf(" (%d", num_aj);  num_aj  ���������ĸ���  Ӧ��ȥһ  �������� 00 ��������Ϊ2 ����Ӧ������� �� ��Ҫ��ȥһ
			same = (num_aj-1)%len_aj;
		}
		printf("%c", m[scen_aj[i]-'0'][same]);
		i += num_aj+1;
	}
	system("pause");
	return 0;
}

*/