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
        printf("1)����   2������   3)�ѻ飬����   4)�ѻ飬����\n");
        printf("��ѡ�����˰�������( 0 �˳� )��\n");
        scanf("%d",&num);

        switch(num)
        {
            case 0: break;
            case 1: printf("������Ӧ��˰���룺");
                    scanf("%f",&income);
                    if( income<=INCOME1 )
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME1*TAX_RATE1+(income-INCOME1)*TAX_RATE2;
                    break;
            case 2: printf("������Ӧ��˰���룺");
                    scanf("%f",&income);
                    if( income<=INCOME2 )
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME2*TAX_RATE1+(income-INCOME2)*TAX_RATE2;
                    break;
            case 3: printf("������Ӧ��˰���룺");
                    scanf("%f",&income);
                    if( income<=INCOME3 )  
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME3*TAX_RATE1+(income-INCOME3)*TAX_RATE2;
                    break;
            case 4: printf("������Ӧ��˰���룺");
                    scanf("%f",&income);
                    if( income<=INCOME4)
                        tax=income*TAX_RATE1;
                    else
                        tax=INCOME4*TAX_RATE1+(income-INCOME4)*TAX_RATE2;
                    break;
            default: printf("����! �������������\n");
                     continue;
        }
        if( num!=0 )
            printf("��Ӧ����˰��%.2f��Ԫ\n",tax);
        
    }while( num!=0 );

    return 0;
}