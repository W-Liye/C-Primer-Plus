//二维数组读入、平均值、最大值、打印（多函数实现）
#include<stdio.h>
#define ROWS 3
#define COLS 5
void input(double ar[][COLS], int rows);
double average_1(double ar[], int cols);
double average(double ar[][COLS], int rows);
double maximum(double ar[][COLS], int rows);
void result(double ar[][COLS], int rows);
int main()
{
    double arr[ROWS][COLS];
    input(arr, ROWS);
    result(arr, ROWS);

    return 0;
}

void input(double ar[][COLS], int rows)
{
    int i,j;
    printf("Enter the array number.\n");
    for(i=0; i<rows; i++)
    {
        printf("Enter five double number");
        for(j=0; j<COLS; j++)
            scanf("%lf", &ar[i][j]);
    }
}

double average_1(double ar[], int cols)
{
    int i;
    double sum=0.0;
    for(i=0; i<cols; i++)
        sum+=ar[i];
    return sum/cols;
}

double average(double ar[][COLS], int rows)
{
    int i,j;
    double sum=0.0;
    for(i=0; i<rows; i++)
        sum+=average_1(ar[i],COLS);
    return sum/rows;
}

double maximum(double ar[][COLS], int rows)
{
    int i,j;
    double max=ar[0][0];
    for(i=0; i<rows; i++)
    {
        for(j=0; j<COLS; j++)
        {
            if(max<ar[i][j])
                max=ar[i][j];
        }
    }
    return max;    
}

void result(double ar[][COLS], int rows)
{
    int i,j;
    double ave1=average_1(ar[0], COLS);
    double ave2=average_1(ar[1], COLS);
    double ave3=average_1(ar[2], COLS);
    double ave=average(ar, ROWS);
    double max=maximum(ar, ROWS);

    printf("The array you input is:\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<COLS; j++)
            printf("%5g", ar[i][j]);
        printf("\n");
    }
    printf("The 1 column's average is %g.\n", ave1);
    printf("The 2 column's average is %g.\n", ave2);
    printf("The 3 column's average is %g.\n", ave3);
    printf("The array's data average is %g.\n", ave);
    printf("The max datum in the array is %g\n", max);
}