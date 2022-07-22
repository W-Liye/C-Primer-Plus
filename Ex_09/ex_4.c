#include<stdio.h>
double harmonic(double a, double b);
int main()
{
    double a,b;
    printf("Enter two decimals: ");
    scanf("%lf %lf",&a, &b);
    printf("There harmonic mean is %g.",harmonic(a,b));

    return 0;
}

double harmonic(double a, double b)
{
    double ave;
    ave=(1/a+1/b)/2;
    return 1/ave;
}