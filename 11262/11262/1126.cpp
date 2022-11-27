#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void reverse(char c[])
{
   int l = strlen(c);
	int i;
	char n = 0;
	for (i = 0; i < l / 2; i++)
	{
		n = c[i];
		c[i] = c[l - (1 + i)];
		c[l - (i + 1)] = n;
	}
}
int main()
{
	char a[100];
	gets_s(a);
	reverse(a);
	puts(a);
	return 0;
}