#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        if(is_prime(i))
        {
            printf("%d is prime\n",i);
        }
    }
}
int is_prime(int a)
{
    int i;
    for(i=2; i<=a/2; i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
