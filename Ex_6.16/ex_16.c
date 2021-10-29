#include<stdio.h>
int main()
{
    float dap=100.0,dei=100.0;
    int year=0;
    do{
        dap+=100.0*0.1;
        dei+=dei*0.05;
        year++;
    }while(dap>=dei);
    printf("%d years later \nDap=%f \nDei=%f",year,dap,dei);
    return 0;
}