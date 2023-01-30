//Program to find highest employee salary from a array
#include<stdio.h>
#include<windows.h>
struct employee{
    int ID;
    char name[15];
    float salary;
};
int main()
{
    struct employee emp[5];
    int i,Highest_salary=0,index;
    char temp[15];
    for(i=0;i<5;i++)
    {
        printf("Enter the ID of employee %d : ",i+1);
        scanf("%d",&emp[i].ID);
        printf("Enter the name of employee %d : ",i+1);
        scanf("%s",temp);
        strcpy(emp[i].name,temp);
        printf("Enter salary of employee %d : ",i+1);
        scanf("%f",&emp[i].salary);
        if(emp[i].salary>Highest_salary)
        {
            Highest_salary=emp[i].salary;
            index=i;
        }
        system("cls");
    }
    printf("Employee having highest salary\nName : %s\nSalary : %.2f\nID : %d\n\n",emp[index].name,emp[index].salary,emp[index].ID);
    return 0;
}
