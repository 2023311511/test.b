#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int i, j, m, n, x[3][4] = { 0 };
	m = n = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &x[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			if (x[m][n] < x[i][j])
			{
				m = i; n = j;
			}
	printf("x[m][n]=%d,m=%d,n=%d", x[m][n], m, n);
	return 0;
}