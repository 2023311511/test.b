#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int add(int x, int y)
{

	int z = 0;
	z = x + y;
	return z;
}
int main()
{



	
	
	int num1, num2;
		scanf("%d %d", &num1, &num2);
	int sum = add(num1, num2);
	printf("%d", sum);
	return 0;
}