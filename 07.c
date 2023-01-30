//Program to calculate the difference between two time period
#include<stdio.h>
struct time
{
    int hour,minut,second;
};
int main()
{
    struct time t1,t2;
    printf("First time period should be greater.\n\n");
    printf("Enter first time period (HH MM SS) : ");
    scanf("%d%d%d",&t1.hour,&t1.minut,&t1.second);

    printf("Enter second time period (HH MM SS) : ");
    scanf("%d%d%d",&t2.hour,&t2.minut,&t2.second);

    if(t1.minut<t2.minut)
    {
        t1.hour-=1;
        t1.minut+=60;
    }
    if(t1.second<t2.second)
    {
        t1.minut-=1;
        t1.second+=60;
    }
    printf("\nDifference between two time period %d:%d:%d \n\n",t1.hour-t2.hour,t1.minut-t2.minut,t1.second-t2.second);
    return 0;
}
