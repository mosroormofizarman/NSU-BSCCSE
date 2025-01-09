#include<stdio.h>

void main(){
    char c;
    printf("Enter first letter of fruit name: ");
    scanf("%c", &c);
    switch(c){
        case 'M':
            printf("price = tk.500/kg");
            break;
        case 'A':
            printf("price = tk.250/kg");
            break;
        case 'B':
            printf("price = tk.130/kg");
            break;
        case 'C':
            printf("price = tk.270/kg");
            break;
    }
}
