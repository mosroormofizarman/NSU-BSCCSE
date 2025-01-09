#include<stdio.h>
#include<math.h>

//function the value of f(x)=2x^2+3x+1

void main(){
    int x, result;
    printf("Enter a number:");
    sacanf("%d", &x);
    result = 2*pow(x,2)+3*x+1;
    printf("%d", result);
}
