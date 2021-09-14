#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the inputs: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b && b>c)
    printf("Sorted");
    else
    if(a<b && b<c)
    printf("Sorted");
    else
    printf("Not Sorted");
}