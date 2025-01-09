#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        if(is_perfect(i))
        {
            printf("%d is perfect\n",i);
        }
    }
}
int is_perfect(int a)
{
    int i,sum=0;
    for(i=1; i<=a/2; i++)
    {
        if(a%i==0)
            sum+=i;
    }
    if(sum==a)
        return 1;
    else
        return 0;
}
