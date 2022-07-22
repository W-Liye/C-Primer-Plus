#include<stdio.h>
void sort(double * a, double * b, double * c);
int main()
{
    double a,b,c;
    printf("Enter three decimals: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    sort(&a, &b, &c);
    printf("Now a=%g, b=%g, c=%g",a,b,c);

    return 0;
}

void sort(double * a, double * b, double * c)  //两两做比较，符合条件就交换数据
{
    double temp;
    if(*a>*b)
    {
        temp=*a;
        *a=*b;
        *b=temp;
    }
    if(*a>*c)
    {
        temp=*a;
        *a=*c;
        *c=temp;
    }
    if(*b>*c)
    {
        temp=*b;
        *b=*c;
        *c=temp;
    }
}