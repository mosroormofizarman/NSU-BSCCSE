#include<stdio.h>

void main()
{
    int i,j,k,m;
    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=1; j<=6-i; j++)
        {
            printf("*");
        }
        for(m=5; m>i; m--)
        {
            printf("*");
        }
        printf("\n");
    }
}
