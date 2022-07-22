#include<stdio.h>
void myfunction(float x,float y);
int main()
{
    float a,b;
    printf("Please enter two decimals: ");
    while(scanf("%f %f",&a,&b)==2)
    {
        myfunction(a,b);
        printf("Please enter two decimals: ");
    }
    return 0;
}

void myfunction(float x,float y)
{
    printf("(a-b)/(a*b)= %f\n",(x-y)/(x*y));
}