#include<stdio.h>
void larger_of(double * x, double * y);
int main()
{
    double x,y;
    printf("Enter two decimals: ");
    scanf("%lf %lf",&x, &y);
    larger_of(&x, &y);
    printf("Now x=%g, y=%g\n",x, y);

    return 0;
}

void larger_of(double * x, double * y)
{
    if( *x>*y )
        *y=*x;
    else
        *x=*y;
}