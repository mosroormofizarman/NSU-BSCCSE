#include<stdio.h>

void main(){
    int b,p,i,sum=1;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter power: ");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        sum*=b;
    }
    printf("%d to the power %d : %d",b,p,sum);


}





