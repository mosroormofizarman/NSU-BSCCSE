#include<stdio.h>


void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    i =5;
    while(i<=n){
        sum+=(i*i);
        i+=4;
    }
    printf("sum = %d ",sum);
}



