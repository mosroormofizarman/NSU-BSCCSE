#include<stdio.h>

void main(){
    int n,sum=0,i,j;
    printf("n : ");
    scanf("%d", &n);

    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("a[%d][%d] ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j)
                sum+=a[i][j];
        }
    }
    printf("sum = %d", sum);
}


