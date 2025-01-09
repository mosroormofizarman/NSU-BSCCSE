#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=100;i>=n;i--)
    {
        if(is_palindrome(i))
        {
            printf("%d ",i);
        }
    }
}
int is_palindrome(int p)
{
    int rem, rev, i=p;
    rev=0;
    while(p!=0)
    {
        rem=p%10;
        rev=rev*10+rem;
        p/=10;
    }
    if(i==rev)
        return 1;
    else
        return 0;
}



