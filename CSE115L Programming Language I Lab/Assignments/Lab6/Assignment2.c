#include<stdio.h>

void main(){
    int n, rev = 0, r, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = n;
    while( n!=0 ){
        r = n%10;
        rev = rev*10 + r;
        n /= 10;
    }
    if (x == rev){
        printf("%d is a palindrome", x);
    }else{
        printf("%d is not a palindrome", x);
    }

}


