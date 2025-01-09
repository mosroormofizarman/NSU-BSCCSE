#include<stdio.h>

void main(){
    int x,y;
    printf("Enter amount:");
    scanf("%d", &x);
    y= x/500;
    printf("500: %d\n", y);
    x %= 500;
    y = x/100;
    printf("100: %d\n", y);
    x %= 100;
    y= x/50;
    printf("50: %d\n", y);
    x %= 50;
    y = x/20;
    printf("20: %d\n", y);
    x %= 20;
    y= x/10;
    printf("10: %d\n", y);
    x %= 10;
    y = x/5;
    printf("5: %d\n", y);
    x %= 5;
    y = x/2;
    printf("2: %d\n", y);
    x %= 2;
    y = x/1;
    printf("1: %d\n", y);
}




