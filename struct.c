#include<stdio.h>

int main()
{
    struct student
    {
        char name[46];
        int no;
    };
    
    struct student s;
    s.no = 8;
    
    printf("%d",s.no);
}