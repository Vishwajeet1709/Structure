//Program to sort object of struct, with serial numbers
#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[15];
    float salary;
};
int main()
{
    int i,j;
    char *temp;
    struct employee emp[5]={{103,"Jeet",26543},{105,"Ram",65847},{101,"Shivani",23468},{104,"Laxmi",22458},{102,"Gaurav",65949}};

    printf("Before sorting employee details : \n");
    for(i=0;i<5;i++)
    {
        printf("%d) Emp ID : %d\n",i+1,emp[i].id);
        printf("%d) Emp Name : %s\n",i+1,emp[i].name);
        printf("%d) Emp Salary : %.2f\n\n",i+1,emp[i].salary);
    }

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(emp[i].id>emp[j].id)
            {
                emp[i].id=emp[i].id+emp[j].id;
                emp[j].id=emp[i].id-emp[j].id;
                emp[i].id=emp[i].id-emp[j].id;

                emp[i].salary=emp[i].salary+emp[j].salary;
                emp[j].salary=emp[i].salary-emp[j].salary;
                emp[i].salary=emp[i].salary-emp[j].salary;

                strcpy(temp,emp[i].name);
                strcpy(emp[i].name,emp[j].name);
                strcpy(emp[j].name,temp);
            }
        }
    }

    printf("After sorting employee details : \n");
    for(i=0;i<5;i++)
    {
        printf("%d) Emp ID : %d\n",i+1,emp[i].id);
        printf("%d) Emp Name : %s\n",i+1,emp[i].name);
        printf("%d) Emp Salary : %.2f\n\n",i+1,emp[i].salary);
    }
    return 0;
}
