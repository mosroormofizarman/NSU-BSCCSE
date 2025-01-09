#include<stdio.h>

void main()
{
    int i,n;
    scanf("%d", &n);
    printf("Factorial %d = %d", n, factorial(n));
}
int factorial(int x)
{
    int i,sum=1;
    for(i=1; i<=x; i++)
    {
        sum*=i;
    }
    return sum;
}


