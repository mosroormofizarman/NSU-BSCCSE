#include<stdio.h>

void main(){
    int r,c,sum=0,i,j;
    printf("r : ");
    scanf("%d", &r);
    printf("c : ");
    scanf("%d", &c);

    int a[r][c];

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d]", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(a[i][j]%2==0)
                sum+=a[i][j];
        }
    }
    printf("sum = %d", sum);
}

