#include<stdio.h>
int main()
{
    int j,n;
    printf("Enter the input: ");
    scanf("%d", &n);
    
    j=n%10;
    
    while(n>0)
    {
        if(j!=1 && j!=0)
        {
        printf("Not a binary");
        break;
        }
    
    n = n/10;
    if(n==0)
    printf("Binary");
    }
    return 0;
}