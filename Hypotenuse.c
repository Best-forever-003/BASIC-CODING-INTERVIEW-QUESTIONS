#include<stdio.h>
#include<math.h>
int main()
{
    float hyp;
    int opp, adj;
    printf("Enter opp ");
    scanf("%d",&opp);
    printf("Enter adj ");
    scanf("%d", &adj);
    hyp = sqrt((opp*opp)+(adj*adj));
    printf("%0.2f", hyp);
}