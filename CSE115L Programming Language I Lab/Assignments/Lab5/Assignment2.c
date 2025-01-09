#include<stdio.h>

void main(){
    int n,i,z,sum=0;
    printf("Enter minimum : ");
    scanf("%d",&i);
    printf("Enter maximum : ");
    scanf("%d",&n);
    printf("Enter common difference : ");
    scanf("%d",&z);
    for(;i<=n;i+=z){
        sum+=i;
    }
    printf("The sum is = %d ",sum);
}




