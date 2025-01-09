#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    printf("sum = %d\n", sum(n));
}

int sum(int n){
    int i,sum=0;
    for(i=1; i<=n; i++){
        sum+=i*i;
    }
    return sum;
}

