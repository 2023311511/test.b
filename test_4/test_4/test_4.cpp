#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d", &x);
	a = x / 100;
	b = x % 100 / 10;
	c = x % 10;
	printf("%d%d%d",c,b,a);
}