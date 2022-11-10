#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int j, i;
	for (j = 1; j <= 9; j++)
	{
		for (i = 1; i <= j; i++)
			printf("%d*%d=%d ", i, j, j * i);
		printf("\n");
	}
	return 0;
}