#include<stdio.h>
int main(int a, char *b[])
{
    int x,f=1,i;
    x=atoi(b[1]);
    for(i=1;i<=x;i++)
    f=f*i;
    printf("%d||",f);
    return 0;
}