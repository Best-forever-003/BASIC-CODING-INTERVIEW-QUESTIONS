#include<stdio.h>
void main()
{
    int ctr;
    char c;
    
    printf("Enter the input: ");
    scanf("%c", &c);
    
    for(ctr=1; ctr<=5; ctr++)
    {
        printf("%c\n", c);
        
        c++;
    }
    
}