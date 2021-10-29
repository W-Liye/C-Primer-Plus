#include<stdio.h>
void Temperatures(double n);
int main()
{
    double fah;
    printf("Please enter the Fahrenheit temperature: ");
    while(scanf("%lf",&fah)==1)
    {
        Temperatures(fah);
        printf("Please enter the Fahrenheit temperature(q to quit): ");
    }
    printf("Done!");
    return 0;
}

void Temperatures(double n)
{
    double cen=5.0/9.0*(n-32.0);
    double kel=5.0/9.0*(n-32.0)+273.16;
    printf("The temperature is %.2f degrees Fahrenheit, %.2f degrees Celsius, %.2f degrees Kelvin.\n",n,cen,kel);
    //return 0;
}