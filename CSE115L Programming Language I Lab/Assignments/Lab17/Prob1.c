#include<stdio.h>

struct student
{
    char name[50],father[50],mother[50],date_of_birth[50],blood_group[50],address[50],major[50];
    float cgpa,marks;
    int id;
} s[100];

int num = 0;

void read(struct student s[]){
    int i;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    fflush(stdin);
    printf("\n");

    for(i=0; i<num; i++)
    {
        printf("Enter name: ");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        fflush(stdin);
        printf("Father's name: ");
        gets(s[i].father);
        fflush(stdin);
        printf("Mother's name: ");
        gets(s[i].mother);
        fflush(stdin);
        printf("Enter Date Of Birth: ");
        gets(s[i].date_of_birth);
        fflush(stdin);
        printf("Enter address: ");
        gets(s[i].address);
        printf("Blood Group: ");
        gets(s[i].blood_group);
        fflush(stdin);
        printf("Enter Major Course: ");
        gets(s[i].major);
        fflush(stdin);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
        fflush(stdin);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        fflush(stdin);

        printf("\n");
    }

}

void output(struct student s[]){
    int i;
    printf("Informations of all students data: \n");
    for(i=0; i<num; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Id %d\n", s[i].id);
        printf("Father's name: %s\n", s[i].father);
        printf("Mother's name: %s\n", s[i].mother);
        printf("Date Of Birth: %s\n", s[i].date_of_birth);
        printf("Address: %s\n", s[i].address);
        printf("Blood group: %s\n", s[i].blood_group);
        printf("Major course: %s\n", s[i].major);
        printf("CGPA: %.2f\n", s[i].cgpa);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

}

void search(struct student s[]){
    int id,i;
    printf("Enter the id you want to search: \n");
    scanf("%d", &id);
    fflush(stdin);
    for(i=0; i<num; i++)
    {
        if(id == s[i].id){
            printf("Name: %s\n", s[i].name);
            printf("Id %d\n", s[i].id);
            printf("Father's name: %s\n", s[i].father);
            printf("Mother's name: %s\n", s[i].mother);
            printf("Date Of Birth: %s\n", s[i].date_of_birth);
            printf("Address: %s\n", s[i].address);
            printf("Blood group: %s\n", s[i].blood_group);
            printf("Major course: %s\n", s[i].major);
            printf("CGPA: %.2f\n", s[i].cgpa);
            printf("Marks: %.2f\n", s[i].marks);
            printf("\n");
        }
    }

}

void edit(struct student s[]){
    int id,i;
    printf("Enter the id you want to edit: \n");
    scanf("%d", &id);
    fflush(stdin);
    for(i=0; i<num; i++)
    {
        if(id==s[i].id){
            printf("Enter name: ");
            gets(s[i].name);
            fflush(stdin);
            printf("Enter ID: ");
            scanf("%d", &s[i].id);
            fflush(stdin);
            printf("Father's name: ");
            gets(s[i].father);
            fflush(stdin);
            printf("Mother's name: ");
            gets(s[i].mother);
            fflush(stdin);
            printf("Enter Date Of Birth: ");
            gets(s[i].date_of_birth);
            fflush(stdin);
            printf("Enter address: ");
            gets(s[i].address);
            printf("Blood Group: ");
            gets(s[i].blood_group);
            fflush(stdin);
            printf("Enter Major Course: ");
            gets(s[i].major);
            fflush(stdin);
            printf("Enter CGPA: ");
            scanf("%f", &s[i].cgpa);
            fflush(stdin);
            printf("Enter Marks: ");
            scanf("%f", &s[i].marks);
            fflush(stdin);

        printf("\n");
        }
    }

}

void main()
{
    read(s);
    output(s);
    search(s);
    edit(s);
    output(s);

}

