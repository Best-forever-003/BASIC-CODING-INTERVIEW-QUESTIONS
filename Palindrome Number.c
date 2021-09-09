#include<stdio.h>
int main()
{
    int n, reversed = 0, remainder, orginal;
    printf("Enter the input  ");
    scanf("%d",&n);
    orginal = n;
    while(n!=0)
    {
        remainder = n%10;
        reversed = reversed*10 +remainder;
        n/=10;
    }
    if(orginal==reversed)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
    return 0;
}