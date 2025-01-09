#include<stdio.h>

void main(){
    int i,x, sum=1;
    scanf("%d", &x);
    for(i=2;i<=(x/2);i++){
        if(x%i==0){
            sum+=i;
        }
    }
    if(sum==x){
        printf("%d is a perfect number", x);
    }else{
        printf("%d is not a perfect number", x);
    }
}
