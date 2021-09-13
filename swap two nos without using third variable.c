#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the inputs: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Before Swapping a=%d , b= %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n After Swapping a =%d , b =%d",a,b);
}