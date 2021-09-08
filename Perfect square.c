#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter input");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(num==i*i)
        {
            printf("Perfect Number",num);
            return 0;
        }
    }
    printf("Not a perfect number",num);
    return 0;
}