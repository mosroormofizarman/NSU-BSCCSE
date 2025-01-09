#include<stdio.h>

void main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n%11==0 && n%5==0){
        printf("multiple of both 5 and 11 ");
    }else if(n%11==0){
        printf("multiple of only 11 ");
    }else if(n%5==0){
        printf("multiple of only 5 ");
    }else{
        printf("multiple of none ");
    }

}


