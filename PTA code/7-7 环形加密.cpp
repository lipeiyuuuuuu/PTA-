/*define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 26
int main()
{
	char loop[26],i;
	for (i = 0; i < 26; i++)
	{
		loop[i] = 'a'+i;
	}
	int key;
	char start;
	scanf("%c %d", &start, &key);
	int  pass;
	pass = start+key;
	if (pass < 'a')
		pass = 'z' - ('a' - abs(pass)-1);
	else if (pass>'z')
		pass = 'a' + (abs(pass) - 'z')-1;
	printf("%c", pass);
	system("pause");
	return 0;
}*/