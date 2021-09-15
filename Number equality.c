#include<stdio.h>
void main()
{
    int a, b;
    
    printf("Enter the inputs: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a==b)
    printf("Equal");
    else
    printf("Not Equal");
}