#include<stdio.h>
#include<math.h>

//function the value of f(x)=

void main(){
    int x, result;
    printf("Enter a number:");
    scanf("%d", &x);
    result = 5*pow(x,3)-4*pow(x,2)+3;
    printf("%d", result);
}

