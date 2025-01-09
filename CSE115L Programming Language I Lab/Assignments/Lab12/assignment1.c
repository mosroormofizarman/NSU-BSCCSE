#include<stdio.h>
#include<math.h>

void main(){
    int n,r;
    printf("r: ");
    scanf("%d", &r);
    printf("n: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sum(r,n));
}

int sum(int r, int n){
    int i,sum=0;
    for(i=0; i<=n; i++){
        sum+=pow(r,i);
    }
    return sum;
}

