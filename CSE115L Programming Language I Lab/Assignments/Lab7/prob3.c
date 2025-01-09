#include<stdio.h>

void main(){
    int n,p=1,i,j;
    float sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        p=1;
        for(j=1; j<=i;j++){
            p*=j;
        }
        sum+=(1.0/p);
    }
    printf("sum = %.1f", sum);
}

