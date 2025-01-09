#include<stdio.h>

void main(){
    int x,y, rem;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("\nEnter y: ");
    scanf("%d", &y);
    rem = x%y;
    printf("quotient for dividing x by y = %d \n", x/y);
    printf("remainder for dividing x by y = %d \n", x%y);
    rem = y%x;
    printf("quotient for dividing y by x = %d \n", y/x);
    printf("remainder for dividing y by x = %d \n", y%x);
}
