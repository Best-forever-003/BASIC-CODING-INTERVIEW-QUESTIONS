#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Leap Year",year);
    }
    else
    {
        printf("Not a leap year",year);
    }
    return 0;
}