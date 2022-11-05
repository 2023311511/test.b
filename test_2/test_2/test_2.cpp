#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, e, x;
	scanf("%d", &x);
	if (x >= 10000)
	{
		a = x / 10000;
		b = (x % 10000) / 1000;
		c = (x % 1000) / 100;
		d = (x % 100) / 10;
		e = x % 10;
		printf("there are 5, %d %d %d %d %d", e, d, c, b, a);
	}
	else if (x >= 1000)
	{
		b = (x % 10000) / 1000;
		c = (x % 1000) / 100;
		d = (x % 100) / 10;
		e = x % 10;
		printf("there are 4, %d %d %d %d", e, d, c, b);
	}
	else if (x >= 100)
	{
		c = (x % 1000) / 100;
		d = (x % 100) / 10;
		e = x % 10;
		printf("there are 3, %d %d %d", e, d, c);
	}
	else if (x >= 10)
	{

		d = (x % 100) / 10;
		e = x % 10;
		printf("there are 2, %d %d", e, d);
	}
	else printf("there are 1, %d", x);

	return 0;
}