#include<stdio.h>
#define WAGE_HOR 10.00
#define OVERTIME 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25
int main()
{
    float hour;
    float sum=0,tax=0,income=0;
    printf("Please enter the number of hours worked in a week: ");
    scanf("%f",&hour);
    if( hour>40 ){
        sum=WAGE_HOR*(40+(hour-40)*OVERTIME);
        if( sum<450 ){
            tax=300*TAX_RATE1+(sum-300)*TAX_RATE2;
        }else{
            tax=300*TAX_RATE1+150*TAX_RATE2+(sum-450)*TAX_RATE3;
        }
        income=sum-tax;
    }else if( hour>30 ){
        sum=WAGE_HOR*hour;
        tax=300*TAX_RATE1+(sum-300)*TAX_RATE2;
        income=sum-tax;
    }else{
        sum=WAGE_HOR*hour;
        tax=sum*TAX_RATE1;
        income=sum-tax;
    }
    printf("Your salary before tax is %.2f,tax is %.2f,salary after tax is %.2f.",sum,tax,income);
    return 0;
}