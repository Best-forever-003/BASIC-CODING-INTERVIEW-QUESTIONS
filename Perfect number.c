#include<stdio.h>

int main()
{
    int i=1, n, sum=0;
    printf("Enter the input: ");
    scanf("%d", &n);
    
    while(i<n)
    {
        if(n%i==0)
        sum = sum+i;
        i++;
    }    
    if(sum==n)
    {
            printf("Perfect no.", n);
    }
    else
    {
            printf("Not a Perfect no.", n);
    }
    return 0;
}