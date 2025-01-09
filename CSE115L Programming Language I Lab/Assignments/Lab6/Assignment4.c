#include<stdio.h>

void main(){
    int n, sum = 0, r, x, i , isPrime=1;
    printf("Enter any integer: ");
    scanf("%d", &n);
    x = n;
    while( n!=0 ){
        r = n%10;
        sum+=r;
        n /= 10;
    }
    printf("Sum of digits :%d. ", sum);
    for(i=2;i<sum/2;i++){
        if(sum%i==0){
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




