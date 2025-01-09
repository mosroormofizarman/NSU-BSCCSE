#include<stdio.h>

void main(){
    int a, b,i, gcd;
    scanf("%d %d", &a, &b);
    i = (a<b) ? a : b;
    while(i>=1){
        if(a%i==0 && b%i ==0){
            gcd = i;
            break;
        }
        i--;
    }
    printf("GCD of %d and %d is %d", a,b,gcd);
}
