//Program to define structure Employee with member variable ID,Name,Salary
#include<stdio.h>
#include<string.h>
struct employee{
    int ID;
    char name[15];
    float Salary;
};
int main()
{
    struct employee e1;
    e1.ID = 1235;
    strcpy(e1.name,"Vishwajeet");
    e1.Salary = 39166.6;
    printf("\nName of employee :");
    puts(e1.name);
    printf("Employee ID : %d\nSalary of employee : %f\n\n",e1.ID,e1.Salary);
    return 0;
}
