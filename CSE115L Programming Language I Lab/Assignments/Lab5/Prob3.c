#include<stdio.h>

void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    i=4;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum = %d ",sum);
}

