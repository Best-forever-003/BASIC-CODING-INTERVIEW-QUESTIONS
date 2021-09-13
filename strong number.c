#include<stdio.h>
int main()
{
    int i, n , sum = 0, r, k,f;
    printf("Enter the input: ");
    scanf("%d", &n);
    k = n;
    
    
    while(k!=0)
    {
        r = k%10;
        f = fact(r);
        k = k/10;
        sum = sum + f;
    }
    
    if(sum==n)
    printf("Strong number");
    else
    printf("Not a strong number");

    return 0;
}

int fact(r)
{
    int mul=1;
    for(int i=1;i<=r;i++)
    mul=mul*i;
    return mul;
}
    