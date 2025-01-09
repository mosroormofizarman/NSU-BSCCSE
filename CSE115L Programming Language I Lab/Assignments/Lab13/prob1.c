#include<stdio.h>

void main(){
    int a[10],i, sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]>0){
            sum+=a[i];
        }
    }
    printf("sum=%d",sum);
}
