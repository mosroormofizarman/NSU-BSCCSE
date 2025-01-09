#include<stdio.h>

int sum=1;

int factorial(int a)
{
    int i;
    for(i=1; i<=a; i++)
    {
        sum*=i;
    }
    return sum;
}
void main()
{
    int i,x;
    scanf("%d", &x);
    printf("%d ", factorial(x));
}

