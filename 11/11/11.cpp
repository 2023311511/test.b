#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int i, n, a[100];
	int j, temp;
	printf("输入元素的个数：");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);	//循环输入n个数
	for (i = 0; i < n; i++)		//循环判断数组中每一个数
	{
		for (j = i + 1; j < n; j++)	//判断a[i]后边的数是否和a[i]相等
		{
			if (a[i] == a[j])
			{
				for (temp = j; temp < n - 1; temp++)
					a[temp] = a[temp + 1];	//将a[j]后面的元素全往前移一个位置
				j--;	//a[j+1]取代a[j]位置，为使下次从a[j+1]开始查找,j减一(为使j保持不变)
				n--;	//数组长度减一
			}
		}
	}
	printf("剩余元素个数: %d\n", n);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
