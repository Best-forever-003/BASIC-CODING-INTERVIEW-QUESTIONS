#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter the input: ");
    scanf("%d", &n);
    
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf("It is not a prime nor a composite number ");
    }
    else
    {
        if(flag==0)
        printf("Prime number",n);
        else
        printf("Not a prime", n);
        
    }
    return 0;
}