#include<stdio.h>
double min(double x, double y);
int main()
{
    double x,y;

    printf("Enter two decimals: ");
    scanf("%lf %lf",&x, &y);   //类型与变量匹配--lf
    printf("The small value is: %g",min(x,y));

    return 0;
}

double min(double x, double y)
{
    if( x<y )
        return x;
    else
        return y;
}