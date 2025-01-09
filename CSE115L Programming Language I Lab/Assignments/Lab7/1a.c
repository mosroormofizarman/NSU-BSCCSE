#include<stdio.h>

void main(){
    int n,r,p=1,i,q=1;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    for(i=n-r+1;i<=n;i++){
        p*=i;
    }
    for(i=1;i<=r;i++){
        q*=i;
    }
    printf("%dC%d = %d", n,r,p/q);
}
