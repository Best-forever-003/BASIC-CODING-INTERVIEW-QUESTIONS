#include<stdio.h>
int main(void)
{
    int a,b,result;
    printf("Enter inputs: ");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    char(o);
    scanf("%c", &o);
    
    switch(o)
    {
        case '1':
        result=((a)+(b));
        break;
        
        case '2':
        result=((a)-(b));
        break;
        
        case '3':
        result=((a)*(b));
        break;
        
        case '4':
        result=((a)%(b));
        break;
        
        case '5':
        result=((a)/(b));
        break;
    }
    printf("result=%d",result);
}