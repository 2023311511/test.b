#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() 
{
    char a[4][4]={0};

    int i,j,t=10,m=1;
    

    for (i = 0; i < 4; i++)
        for (j = 3; j >=(3-i); j--)
        {
            a[i][j] = t;
            t--;
            }
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
         
            if (m % 4 == 0)
                printf("\n");
            m++;
        }

    
    return 0;
}