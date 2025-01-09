#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n >= 10){
        printf("%d", n%10);
        n /= 10;
    }
    printf("%d", n%10);

}

