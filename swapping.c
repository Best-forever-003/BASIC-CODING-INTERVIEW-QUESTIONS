#include<stdio.h>
int main()
{
    int first, second, temp;
    printf("Enter first term ");
    scanf("%d", &first);
    printf("Enter second term ");
    scanf("%d", &second);
    
    temp = first;
    first = second;
    second =temp;
    
    printf("\n %d", first);
    printf("%d", second);
    return 0;
}