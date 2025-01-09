#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float marks;
}s[100];

 int num = 0;

int main() {
    printf("Enter the information for the students");

    int i;

    for(i = 0; i < 100; i++)
    {
       printf("\n Name of the student and press enter to terminate the inputs:");
       gets(s[i].name);
       if(strcmp(s[i].name, "") == 0)
        break;
       fflush(stdin);
       printf("\n Id of the student:");
       scanf("%d", &s[i].id);
       fflush(stdin);
       printf("\n Marks of the student:");
       scanf("%f", &s[i].marks);
       fflush(stdin);
       num++;
    }

    printf("\n\n\nDisplaying the information of the students :\n");

    for(i = 0; i < num; i++)
    {
       printf("\n Information of the student #%d:", i + 1);
       printf("\n Name of the student:");
       puts(s[i].name);
       printf(" Id of the student: %d", s[i].id);
       printf("\n Marks of the student: %f", s[i].marks);
       printf("\n******************************************\n");
    }
return 0;
}
