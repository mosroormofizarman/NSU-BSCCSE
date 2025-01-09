#include<stdio.h>

//4+7+10+...+n

void main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=4;i<=n;i+=3){
        sum+=i;
    }
    printf("sum = %d ",sum);
}


