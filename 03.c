//Program to create a function to display details of structure
#include<stdio.h>
#include<string.h>
struct employee{
    int ID;
    char name[20];
    float salary;
};
void SetData(struct employee *emp)
{
    char temp[15];
    printf("Enter name of employee : ");
    gets(temp);
    strcpy(emp->name,temp);
    printf("Enter employee ID : ");
    scanf("%d",&emp->ID);
    printf("Enter employee salary : ");
    scanf("%f",&emp->salary);
}
void ShowData(struct employee e1)
{
    printf("\n\nName of employee : %s\n",e1.name);
    printf("ID of employee : %d\n",e1.ID);
    printf("Salary of employee : %.2f\n\n",e1.salary);
}
int main()
{
    struct employee emp;
    SetData(&emp);
    ShowData(emp);
    return 0;
}
