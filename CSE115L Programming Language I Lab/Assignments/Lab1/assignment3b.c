#include<stdio.h>
#include<math.h>

//function the value of f(x)=

void main(){
    int x; double result;
    printf("Enter a number:");
    sacanf("%d", &x);
    result = sqrt(3*pow(x,3)+2*pow(x,2)+4);
    printf("%lf", result);
}

