#include<stdio.h>

int base(int a , int b){
    if(b==0){
        return 1;
    }else{
        return a*base(a,b-1);
    }
}

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", base(a,b));
}
