#include<stdio.h>

void main()
{
    int i;
    printf("Enter the input: ");
    scanf("%d", &i);
    i = (i%5);
    printf("%d", i);
}