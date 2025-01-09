#include<stdio.h>

void main()
{
    int a;
    scanf("%d", &a);
    printf("reverse = %d\n", reverse(a));
}

int reverse(int a)
{
    int rev=0,rem;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    return rev;
}





