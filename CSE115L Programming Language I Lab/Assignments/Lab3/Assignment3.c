#include<stdio.h>

void main(){
    float a,b,c;
    printf("Enter angles of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a+b+c == 180.00){
        printf("the triangle is valid");
    }else {
        printf("the triangle is invalid");
    }

}




