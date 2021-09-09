#include<stdio.h>
int main()
{
    int n, t1=0, t2=1, nextTerm;
    printf("Enter the input: ");
    scanf("%d", &n);
    nextTerm = t1+t2;
    printf("%d, %d, ", t1,t2);
    
    while(nextTerm<=n)
    {
        printf("%d, ,",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}