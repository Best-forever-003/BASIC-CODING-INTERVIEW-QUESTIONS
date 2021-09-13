#include<stdio.h>
int main()
{
    int n1,n2,i,c;
    printf("Enter the inputs: ");
    scanf("%d\n", &n1);
    scanf("%d", &n2);
    
    for(i=1;n1<=n2;i++)
    {
        for(c=n1;c<=n2;c++)
        {
            printf("%d", n2);
        }
        printf("\n");
        n2--;
    }
}