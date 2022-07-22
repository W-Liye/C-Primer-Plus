#include<stdio.h>
int main()
{
    float a,b;
    printf("Please enter two decimals: ");
    while(scanf("%f %f",&a,&b)==2)
    {
        printf("(a-b)/(a*b)= %f\n",(a-b)/(a*b));
        printf("Please enter two decimals: ");
    }
    return 0;
}