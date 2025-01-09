#include <stdio.h>
#include <math.h>

void main(){
    int n, d = 0, i = 0, r;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n!=0){
        r = n%10;
        n /= 10;
        d += r*pow(2,i);
        ++i;
    }
    printf("decimal = %d", d);

}


