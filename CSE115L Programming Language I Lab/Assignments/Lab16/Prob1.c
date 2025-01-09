#include <stdio.h>

struct date{
    int day, month, year;
};

struct employee{
    char name[50];
    char dob[50];
    //char date[50];
    int sal;
    struct date start;
}e[4];

void main(){
    int i;
    printf("Enter information of employees:\n");
    for(i=0;i<1;++i)
    {
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("D.O.B: ");
        scanf("%s",e[i].dob);
        printf("Starting date: ");
        scanf("%d/%d/%d",&e[i].start.day,&e[i].start.month,&e[i].start.year);
        printf("Salary: ");
        scanf("%d",&e[i].sal);
        printf("\n");
    }
    printf("Info of employee with highest salary:\n\n");
            printf("Name: %s\n",e[0].name);
            printf("D.O.B: %s\n",e[0].dob);
            printf("Starting date: %d/%d/%d\n",e[0].start.day,e[0].start.month,e[0].start.year);
            printf("Salary: %d\n",e[0].sal);
        /*if(e[0].sal>e[1].sal && e[0].sal>e[2].sal && e[0].sal>e[3].sal){
            printf("Name: %s\n",e[0].name);
            printf("D.O.B: %s\n",e[0].dob);
            printf("Starting date: %d/%d/%d\n",e[0].start.day,e[0].start.month,e[0].start.year);
            printf("Salary: %d\n",e[0].sal);
        }else if(e[1].sal>e[2].sal && e[1].sal>e[3].sal){
            printf("Name: %s\n",e[1].name);
            printf("D.O.B: %s\n",e[1].dob);
            //printf("Starting date: %s\n",e[1].date);
            printf("Salary: %d\n",e[1].sal);
        } else if(e[2].sal>e[3].sal){
            printf("Name: %s\n",e[2].name);
            printf("D.O.B: %s\n",e[2].dob);
            //printf("Starting date: %s\n",e[2].date);
            printf("Salary: %d\n",e[2].sal);
        } else{
            printf("Name: %s\n",e[3].name);
            printf("D.O.B: %s\n",e[3].dob);
            //printf("Starting date: %s\n",e[3].date);
            printf("Salary: %d\n",e[3].sal);
        }
        */


}

