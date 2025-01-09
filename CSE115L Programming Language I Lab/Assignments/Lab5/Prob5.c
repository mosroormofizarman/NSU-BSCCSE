#include<stdio.h>

//2^3+3^3+4^3+.....+n^3
void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    i =2;
    while(i<=n){
        sum+=(i*i*i);
        i++;
    }
    printf("sum = %d ",sum);
}



