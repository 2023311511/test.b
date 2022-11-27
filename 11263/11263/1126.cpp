#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n, m, i, x;
    for (i = 1; i < 300; i++)
    {
        if (i < 10)
        {
            if (i * i <= 10)
                printf("%d ", i);
        }
        if (i <= 100 && i >= 10)
        {
            if (i % 10 == i / 10 && i * i % 10 == i * i / 100)
                printf("%d ", i);
        }
        if (i <= 300 && i > 100)
        {
            if (i % 10 == i / 100 && i * i / 10000 == i * i % 10 && i * i % 100 / 10 == i * i / 1000 % 10)
                printf("%d ", i);
        }

    }
}
