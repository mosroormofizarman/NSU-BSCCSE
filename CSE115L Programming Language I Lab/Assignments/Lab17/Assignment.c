#include<stdio.h>

struct student
{
    char name[50],father[50],mother[50],date_of_birth[50],blood_group[50],address[50],major[50];
    float cgpa;
    int id;
} s[100];

int num = 0;

void read(struct student s[]){
    int i;
    fflush(stdin);
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

        printf("\n");
    }

}

void search(struct student s[]){
    int id,i,flag=0;
    printf("\nEnter the id you want to search: \n");
    scanf("%d", &id);
    fflush(stdin);
    for(i=0; i<num; i++)
    {
        if(id == s[i].id){
            flag=1;
            printf("\nName: %s\n", s[i].name);
            printf("Id: %d\n", s[i].id);
            printf("Father's name: %s\n", s[i].father);
            printf("Mother's name: %s\n", s[i].mother);
            printf("Date Of Birth: %s\n", s[i].date_of_birth);
            printf("Address: %s\n", s[i].address);
            printf("Blood group: %s\n", s[i].blood_group);
            printf("Major course: %s\n", s[i].major);
            printf("CGPA: %.2f\n", s[i].cgpa);
            printf("\n");
        }
    }
    if(flag==0){
        printf("Not fount the searched id \n");
    }
}

void edit(struct student s[]){
    int id,i, flag =0;

    printf("\nEnter the id you want to edit: \n");
    scanf("%d", &id);
    fflush(stdin);
    for(i=0; i<num; i++)
    {
        if(id==s[i].id){
            flag =1;
            printf("\nEnter name: ");
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

            printf("\n");
        }
    }
    if(flag==0){
        printf("Not fount the searched id \n");
    }
}

void insert(struct student s[]){
    int n,i;
    printf("\nHow many you want to insert: ");
    scanf("%d", &n);
    fflush(stdin);

    for(i=0; i<n; i++)
    {
        printf("\nEnter name: ");
        gets(s[num+i].name);
        fflush(stdin);
        printf("Enter ID: ");
        scanf("%d", &s[num+i].id);
        fflush(stdin);
        printf("Father's name: ");
        gets(s[num+i].father);
        fflush(stdin);
        printf("Mother's name: ");
        gets(s[num+i].mother);
        fflush(stdin);
        printf("Enter Date Of Birth: ");
        gets(s[num+i].date_of_birth);
        fflush(stdin);
        printf("Enter address: ");
        gets(s[num+i].address);
        printf("Blood Group: ");
        gets(s[num+i].blood_group);
        fflush(stdin);
        printf("Enter Major Course: ");
        gets(s[num+i].major);
        fflush(stdin);
        printf("Enter CGPA: ");
        scanf("%f", &s[num+i].cgpa);
        fflush(stdin);

        printf("\n");
    }
    num+=n;
    //printf("%d",num);
}

void delete(struct student s[]){
    int id,i, flag =0;
    printf("Enter the id you want to delete: \n");
    scanf("%d", &id);
    fflush(stdin);
    for(i=0; i<num; i++)
    {   if(id == s[i].id){
            flag=1;
            s[i].id = 0;
        }
    }
    if(flag==0){
        printf("Not fount the searched id \n");
    }
}

void output(struct student s[]){
    int i;
    printf("Informations of all students data: \n");
    for(i=0; i<num; i++)
    {   if(s[i].id!=0){
            printf("Name: %s\n", s[i].name);
            printf("Id: %d\n", s[i].id);
            printf("Father's name: %s\n", s[i].father);
            printf("Mother's name: %s\n", s[i].mother);
            printf("Date Of Birth: %s\n", s[i].date_of_birth);
            printf("Address: %s\n", s[i].address);
            printf("Blood group: %s\n", s[i].blood_group);
            printf("Major course: %s\n", s[i].major);
            printf("CGPA: %.2f\n", s[i].cgpa);
            printf("\n");
        }
    }

}

void main()
{
    printf("Enter the number of students: ");
    scanf("%d", &num);
    fflush(stdin);
    printf("\n");
    read(s);

    char a;

    //printf("Enter 1 to input the information of students\n");
    printf("Enter 2 to output the information of students\n");
    printf("Enter 3 to search the information of students\n");
    printf("Enter 4 to edit the information of students\n");
    printf("Enter 5 to insert the information of students\n");
    printf("Enter 6 to delete the information of students\n\n");

    printf("Enter the number which you want : ");
    scanf("%c", &a);
    if(a == '1'){
        read(s);
    }else if(a == '2'){
        output(s);
    }else if(a== '3'){
        search(s);
    }else if(a== '4'){
        edit(s);
        output(s);
    }else if(a== '5'){
        insert(s);
        output(s);
    }else if(a== '6'){
        delete(s);
        output(s);
    }

}


