#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c){
        printf("the triangle is valid");
    }else {
        printf("the triangle is invalid");
    }

}



