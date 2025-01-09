#include <stdio.h>

void nat (int n) {
    printf ("%d ", n);
    if (n > 1){
        nat(n-1);
    }
}

void main (void) {
    int n;
    scanf("%d", &n);
    nat(n);
}
