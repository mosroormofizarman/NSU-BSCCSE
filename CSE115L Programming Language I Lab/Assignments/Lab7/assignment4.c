#include<stdio.h>

void main(){
    int n,p=1,i,j;
    int m=1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        p=1;
        for(j=1; j<=i;j++){
            p*=j;
        }
        m*=p;
    }
    printf("sf(%d) = %d",n,m );
}


