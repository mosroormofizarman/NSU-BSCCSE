#include<stdio.h>

void main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=n+1-i;j++){
            if(j==1||j+i==n+1||i==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

