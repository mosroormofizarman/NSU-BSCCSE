#include<stdio.h>
#include <string.h>

int compare(char str1[], char str2[]){
    int n = strlen(str1);
    int m = strlen(str2);
    if(n==m)
        return 0;
    else if(n>m)
        return 1;
    else
        return -1;
}
void main()
{
    char s1[100], s2[100];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    int result = compare(s1, s2);
    printf("%d", result);
}
