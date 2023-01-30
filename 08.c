//Program to store the information of 10 students using structure and display them
#include<stdio.h>
#include<string.h>
#include<windows.h>
struct student{
    char name[15],cls[5];
    int roll_no;
};
void GetData(struct student *s1)
{
    int i;
    char str[15];
    for(i=0;i<10;i++)
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
void ShowData(struct student *s1)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Name of student %d : %s\n",i+1,s1[i].name);
        printf("Class of student %d : %s\n",i+1,s1[i].cls);
        printf("Roll number of student %d : %d\n\n",i+1,s1[i].roll_no);
    }
}
int main()
{
    struct student s[10];
    GetData(s);
    ShowData(s);
    return 0;
}
