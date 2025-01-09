#include<stdio.h>

void main(){
    int n,i,sum=0;
    printf("Enter the number to print the multiplication table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }

}





