//Program to store information of 'n' student(s) using structure
#include<stdio.h>
#include<string.h>
#include<windows.h>
struct student{
    char name[15],cls[5];
    int roll_no;
};
void GetData(struct student *s1,int n)
{
    int i;
    char str[15];
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d : ",i+1);
        scanf("%s",str);
        strcpy(s1[i].name,str);
        printf("Enter class of student %d : ",i+1);
        scanf("%s",str);
        strcpy(s1[i].cls,str);
        printf("Enter the roll number of student %d : ",i+1);
        scanf("%d",&s1[i].roll_no);
        system("cls");
    }
}
void ShowData(struct student *s1,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Name of student %d : %s\n",i+1,s1[i].name);
        printf("Class of student %d : %s\n",i+1,s1[i].cls);
        printf("Roll number of student %d : %d\n\n",i+1,s1[i].roll_no);
    }
}
int main()
{
    int n;
    printf("Enter the number of students that you want to store : ");
    scanf("%d",&n);
    struct student s[n];
    GetData(s,n);
    ShowData(s,n);
    return 0;
}

