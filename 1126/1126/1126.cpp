#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, t;
	int a[5]={0};
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 2; i++)
		t = a[i], a[i] = a[4 - i], a[4 - i] = t;
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	return 0;
}
	