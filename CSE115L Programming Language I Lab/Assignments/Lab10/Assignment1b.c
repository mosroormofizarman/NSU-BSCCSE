#include<stdio.h>

float sum(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("sum = %.1f\n", sum(n));
}

float sum(int n){
    int i,fact=1;
    float sum = 0;
    for(i=1; i<=n; i++){
        fact*=i;
        sum+=(1/(float)fact);
    }
    return sum;
}


