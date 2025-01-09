#include<stdio.h>
#include<math.h>

void main(){
    int x; float result;
    printf("Enter a number:");
    scanf("%d", &x);
    result = pow(x,2)+sqrt(x)-5*x;
    printf("result = %f", result);
}


