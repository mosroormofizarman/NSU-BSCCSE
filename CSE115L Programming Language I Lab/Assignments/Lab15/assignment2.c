#include<stdio.h>

void main(){
    int r,c,sum=0,i,j;
    printf("r : ");
    scanf("%d", &r);
    printf("c : ");
    scanf("%d", &c);

    int a[r][c];
    int b[r][c];

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("a[%d][%d] ", i,j);
            scanf("%d", &a[i][j]);
            a[i][j] = 5*a[i][j];
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("b[%d][%d] ", i,j);
            scanf("%d", &b[i][j]);
            b[i][j] = 7*b[i][j];
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

}

