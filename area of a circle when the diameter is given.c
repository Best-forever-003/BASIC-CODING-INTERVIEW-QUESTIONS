#include<stdio.h> 
#define PI 3.14
int main(int a, char *b[]) //command line arguments
{
    int d;
    float area =0;
    d= atoi(b[1]);
    area =(float) 3.14*(d/2)*(d/2);
    printf("%0.2f‖", area); //%0.2f is to print the answer with 2 values after decimal point. return 0;
}
