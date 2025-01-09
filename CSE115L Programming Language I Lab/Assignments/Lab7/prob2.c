#include<stdio.h>

void main(){
    int n,p=1,i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=2*n;i>=n;i--){
        p*=i;
    }
    printf("q(%d) = %d", n, p);
}
