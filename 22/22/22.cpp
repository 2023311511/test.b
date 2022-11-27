#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int num ,m;
	scanf("%d", &num);
	m = num/10;
	
	int i = 0;
	int c = 0;
	int a=num ;
	int j,t;
	while (a)//判断几位数
	{
		a = a / 10;
		c++;
	}
	
	int arr[100] = { 0 };//定义一个大数组，可以存放100位的数
	while (num)//倒序存放每一位
 {
		arr[i++] = num % 10;
		num /= 10;
	}
	for (j = 0; j < i / 2; j++)//将顺序归正
	{
		t = arr[j];
		arr[j] = arr[i - 1 - j];
		arr[i - 1 - j] = t;
	}
	
	for ( j = 0; j < i; j++)//检验输出
	{
		printf("%d ", arr[j]);
	}
	printf("该数是%d位数 ",c);
	return 0;
}
