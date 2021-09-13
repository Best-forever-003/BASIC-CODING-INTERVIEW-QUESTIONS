#include<stdio.h>
int main()
{
    int n, orginal, remainder, result = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    orginal=n;
    
    while(orginal!=0)
    {
        remainder=orginal%10;
        result+=remainder*remainder*remainder;
        orginal/=10;
    }
    
    if(n==result)
    printf("Armstrong");
    else
    printf("Not an Armstrong");
    
    return 0;
}