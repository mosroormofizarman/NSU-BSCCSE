#include<stdio.h>

void main(){
    float tax, base_tax, percentage_of_excess, salary , min_salary;
    printf("Enter salary : ");
    scanf("%f", &salary);
    if(salary >= 0.00 && salary <= 14999.99){
        base_tax = 0.00;
        percentage_of_excess = 15/100.00;
        min_salary = 0.00;
        tax = base_tax+percentage_of_excess*(salary-min_salary);
    } else if(salary >= 15000.00 && salary <= 29999.99){
        base_tax = 2250.00;
        percentage_of_excess = 18/100.00;
        min_salary = 15000.00;
        tax = base_tax+percentage_of_excess*(salary-min_salary);
    } else if(salary >= 30000.00 && salary <= 49999.99){
        base_tax = 5400.00;
        percentage_of_excess = 22/100.00;
        min_salary = 30000.00;
        tax = base_tax+percentage_of_excess*(salary-min_salary);
    } else if(salary >= 50000.00 && salary <= 79999.99){
        base_tax = 11000.00;
        percentage_of_excess = 27/100.00;
        min_salary = 50000.00;
        tax = base_tax+percentage_of_excess*(salary-min_salary);
    } else if(salary >= 80000.00 && salary <= 150000.00){
        base_tax = 21600.00;
        percentage_of_excess = 33/100.00;
        min_salary = 80000.00;
        tax = base_tax+percentage_of_excess*(salary-min_salary);
    }
    printf("tax = %f", tax);
}
