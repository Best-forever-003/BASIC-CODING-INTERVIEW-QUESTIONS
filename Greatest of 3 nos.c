#include<stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter the inputs: ");
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    
    if(n1>=n2 && n1>=n3)
    printf("%.2lf greater", n1);
    
    else if(n2>=n1 && n2>= n3)
    printf("%.2lf greater", n2);
    
    else
    printf("%.2lf greater", n3);
    
    return 0;
}