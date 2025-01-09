#include <stdio.h>
#include <math.h>

int main(){
    int n, b = 0, r, i = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n!=0){
        r = n%2;
        n /= 2;
        b += r*i;
        i *= 10;
    }
    printf("binary = %d", b);
}

