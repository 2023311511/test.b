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
	while (a)//�жϼ�λ��
	{
		a = a / 10;
		c++;
	}
	
	int arr[100] = { 0 };//����һ�������飬���Դ��100λ����
	while (num)//������ÿһλ
 {
		arr[i++] = num % 10;
		num /= 10;
	}
	for (j = 0; j < i / 2; j++)//��˳�����
	{
		t = arr[j];
		arr[j] = arr[i - 1 - j];
		arr[i - 1 - j] = t;
	}
	
	for ( j = 0; j < i; j++)//�������
	{
		printf("%d ", arr[j]);
	}
	printf("������%dλ�� ",c);
	return 0;
}
