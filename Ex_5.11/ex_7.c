#include<stdio.h>
void cube(double n);
int main(void)
{
    double num;
    printf("Please input a number: ");
    scanf("%lf",&num);
    cube(num);
    return 0;
}

void cube(double n)
{
    double t=n*n*n;
    printf("%lf\n",t);
    printf("%f",n*n*n);
}