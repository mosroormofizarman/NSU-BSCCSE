#include<stdio.h>

void main()
{
    int rem, rev, n, p, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        p = i;
        rev=0;
        while(p!=0)
        {
            rem=p%10;
            rev=rev*10+rem;
            p/=10;
        }
    if(i==rev)
        {
            printf("\n%d is a palindrome", i);
        }

    }


}


