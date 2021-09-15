#include<stdio.h>
void main()
{
    char str1[100], str2[100];
    
    printf("Enter the inputs: ");
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    if(str1[0]==str2[0] && str1[1]==str2[1] && str1[2]==str2[2])
    printf("Equal");
    else
    printf("Not equal");
}