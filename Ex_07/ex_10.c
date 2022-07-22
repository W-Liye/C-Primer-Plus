#include<stdio.h>
#define INCOME1 17850
#define INCOME2 23900.0
#define INCOME3 29750.0
#define INCOME4 14875.0
#define TAX_RATE1 0.15
#define TAX_RATE2 0.28
int main()
{
    int num;
    float income,tax;
    do{
        printf("1)单身   2）户主   3)已婚，共有   4)已婚，离异\n");
        printf("请选择缴纳税金的种类( 0 退出 )：\n");
        scanf("%d",&num);

        switch(num)
        {
            case 0: break;
            case 1: printf("请输入应纳税收入：");
                    scanf("%f",&income);
                    if( income<=INCOME1 )
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME1*TAX_RATE1+(income-INCOME1)*TAX_RATE2;
                    break;
            case 2: printf("请输入应纳税收入：");
                    scanf("%f",&income);
                    if( income<=INCOME2 )
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME2*TAX_RATE1+(income-INCOME2)*TAX_RATE2;
                    break;
            case 3: printf("请输入应纳税收入：");
                    scanf("%f",&income);
                    if( income<=INCOME3 )  
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME3*TAX_RATE1+(income-INCOME3)*TAX_RATE2;
                    break;
            case 4: printf("请输入应纳税收入：");
                    scanf("%f",&income);
                    if( income<=INCOME4)
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME4*TAX_RATE1+(income-INCOME4)*TAX_RATE2;
                    break;
            default: printf("错误! 请重新输入类别！\n");
                     continue;
        }
        if( num!=0 )
            printf("你应缴纳税金%.2f美元\n",tax);
        
    }while( num!=0 );

    return 0;
}