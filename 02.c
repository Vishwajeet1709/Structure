//Program to create function to take user input in structure
#include<stdio.h>
#include<string.h>
struct employee{
    char name[15];
    int ID;
    float salary;
};
void SetData(struct employee* e1)
{
    printf("Enter your name : ");
    gets(e1->name);
    printf("Enter your ID : ");
    scanf("%d",&e1->ID);
    printf("Enter your salary : ");
    scanf("%f",&e1->salary);
}
int main()
{
    struct employee e1;
    SetData(&e1);
    printf("\n\nDisplaying employee details.\n");
    printf("Employee ID : %d\nEmployee name : ",e1.ID);
    puts(e1.name);
    printf("Employee salary : %f\n\n",e1.salary);
    return 0;
}
