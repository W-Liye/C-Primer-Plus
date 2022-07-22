#include<stdio.h>
//#define WAGE_HOR 1000
#define SALARY1 8.75
#define SALARY2 9.33
#define SALARY3 10.00
#define SALARY4 11.20
#define OVERTIME 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25
int main()
{
    int num;
    float hour,WAGE_HOR;
    float sum=0,tax=0,income=0;
    do{
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $%.2f/hr                          2) $%.2f/hr\n",SALARY1,SALARY2);
        printf("3) $%.2f/hr                         4) $%.2f/hr\n",SALARY3,SALARY4);
        printf("5) quit\n");
        printf("*****************************************************************\n");
        scanf("%d",&num);

        switch (num)
        {
            case 1: WAGE_HOR=SALARY1;
                    break;
            case 2: WAGE_HOR=SALARY2;
                    break;
            case 3: WAGE_HOR=SALARY3;
                    break;
            case 4: WAGE_HOR=SALARY4;
                    break;
            case 5: printf("Quit!\n");
                    break;
            default: printf("Error selected! please retry!\n");
        }

        if( num>=1&&num<=5 ){
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
            printf("Your salary before tax is %.2f,tax is %.2f,salary after tax is %.2f.\n\n",sum,tax,income);
            printf("continue....\n");
        }

    }while( num!=5 );

    return 0;
}