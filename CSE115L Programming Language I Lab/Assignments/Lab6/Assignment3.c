#include<stdio.h>

void main(){
    int n, rev = 0, r, x, i , isPrime=1;
    printf("Enter any integer: ");
    scanf("%d", &n);
    x = n;
    while( n!=0 ){
        r = n%10;
        rev = rev*10 + r;
        n /= 10;
    }
    printf("Reverse number is :%d. ", rev);
    for(i=2;i<rev/2;i++){
        if(rev%i==0){
           isPrime = 0;
           break;
        }
    }
    if(isPrime==0){
        printf("It is not a prime number.");
    }else{
        printf("It is a prime number.");
    }

}



