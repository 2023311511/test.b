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
	while (a)//�жϼ�λ��
	{
		a = a / 10;
		c++;
	}
	int t = c;
	int arr[100] = { 0 };//����һ�������飬���Դ��100λ����
	for (i = 1; i < c; i++)//����10��c-1�η�
		n = n * 10;
	for (i=0; i <c;i++)//˳����ÿһλ
	{
		arr[i] = num /n;
		num=num %n;
		n = n / 10;
		}
	for (i = 0; i< c; i++)//�������
	{
		printf("%d ", arr[i]);
	}
	printf("������%dλ�� ", c);
	return 0;
}

