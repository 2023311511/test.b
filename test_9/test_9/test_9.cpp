#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	char op;
	scanf("%f %f %c",&a,&b,&op);
	if (op == '+')
	
		printf("%f", a+b);
	
	if (op == '-')
	
	printf("%f", a-b);
	
	if (op == '*')
	
		printf("%f", a*b);
	
	if (op== '/')
	{
		if (b == 0)
		printf(" ‰»Î¥ÌŒÛ");
		else
		printf("%f", a/b);
		
	}
	return 0;
}
