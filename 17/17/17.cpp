#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num, m;
	scanf("%d", &num);
	m = num / 10;

	int i ;
	int c = 0;
	int a = num;
	int n=1;
	while (a)//判断几位数
	{
		a = a / 10;
		c++;
	}
	int t = c;
	int arr[100] = { 0 };//定义一个大数组，可以存放100位的数
	for (i = 1; i < c; i++)//计算10的c-1次方
		n = n * 10;
	for (i=0; i <c;i++)//顺序存放每一位
	{
		arr[i] = num /n;
		num=num %n;
		n = n / 10;
		}
	for (i = 0; i< c; i++)//检验输出
	{
		printf("%d ", arr[i]);
	}
	printf("该数是%d位数 ", c);
	return 0;
}

