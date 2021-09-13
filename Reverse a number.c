#include <stdio.h>
int main()
{
    int rev = 0, n, remainder;
    printf("Enter the input: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("%d", rev);
    return 0;
}