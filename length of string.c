#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter input: ");
    scanf("%s", str);
    printf("%d", strlen(str));
    return 0;
}