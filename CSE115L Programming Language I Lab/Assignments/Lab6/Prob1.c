#include<stdio.h>

void main(){
    int n, f, last;
    scanf("%d", &n);
    f = n;
    while(f >= 10){
        f /= 10;
    }
    printf("First digit = %d\n", f);
    printf("Last digit = %d\n", n%10);

}
