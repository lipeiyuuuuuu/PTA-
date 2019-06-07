/*

#include <stdio.h>
#define N 21
int main()
{
	int n, m, a[N], b[N], c[N * 2], i, j, count = 0, flag = 1, k = 0;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for (j = 0; j<m; j++)
		scanf("%d", &b[j]);
	for (i = 0; i<n; i++)
	{
		flag = 1;
		for (j = 0; j<m; j++)
		{
			if (a[i] == b[j])
			{
				flag = 0;
			}
		}
		if (flag)
		{
			//printf("%d",a[i]);
			if (count == 0)
			{
				c[count] = a[i];
				count++;
			}
			else
			{
				for (k = 0; k<count; k++)
				{
					if (a[i] == c[k])
						break;
				}
				if (k == count)
				{
					c[count] = a[i];
					count++;
				}
			}

		}
	}
	for (i = 0; i<m; i++)
	{
		flag = 1;
		for (j = 0; j<n; j++)
		{
			if (b[i] == a[j])
			{
				flag = 0;
			}
		}
		if (flag)
		{
			for (k = 0; k<count; k++)
			{
				if (b[i] == c[k])
					break;
			}
			if (k == count)
			{
				c[count] = b[i];
				count++;
			}
		}
	}
	printf("%d", c[0]);
	for (i = 1; i<count; i++)
	{
		printf(" %d", c[i]);
	}
	return 0;
}


*/