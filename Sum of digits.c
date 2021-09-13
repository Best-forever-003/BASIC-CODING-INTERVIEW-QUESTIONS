#include<stdio.h>
int main()
{
    int sum = 0, n , m;
    printf("Enter the input: ");
    scanf("%d", &n);
    
    while(n>0)
    {
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    printf("Output: %d", sum);
    return 0;
}