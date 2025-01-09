#include<stdio.h>
//for even output is 0 , and odd is 1
void main(){
    int n;
    printf("Enter odd number:");
    scanf("%d", &n);
    printf("bitwise AND of n and 1 = %d\n", n&1);
    printf("Enter even number:");
    scanf("%d", &n);
    printf("bitwise AND of n and 1 = %d", n&1);
}
