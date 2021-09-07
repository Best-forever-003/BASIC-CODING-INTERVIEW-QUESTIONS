#include<stdio.h>
int main(int a, char *b[]) //command line arguments
{
int x,y,f=1,i;
x=atoi(b[1]); //atoi function is to convert a character to integer
for(i=1;i<=x;i++)
{
f=f*i;
}
printf("%d‖",f); 
return 0;
}
