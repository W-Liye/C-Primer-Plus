//二维变长数组拷贝、打印
#include<stdio.h>
void copy_ptr_2(int rows, int cols, double ar1[rows][cols], double ar2[rows][cols]);
void copy_ptr(int cols, double ar1[cols], double ar2[cols]);
void show_array(int rows, int cols, double ar[rows][cols]);
int main()
{
    double arr[5][3] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1, 11.1, 12.2, 13.3, 14.4, 15.5};
    double target[5][3];
    copy_ptr_2(5, 3, target, arr);
    show_array(5, 3, arr);
    show_array(5, 3, target);

    return 0;
}

void copy_ptr_2(int rows, int cols, double ar1[rows][cols], double ar2[rows][cols])
{
    int i;
    for(i=0; i<rows; i++)
        copy_ptr(cols, ar1[i], ar2[i]);
}

void copy_ptr(int cols, double ar1[cols], double ar2[cols])
{
    int i;
    for(i=0; i<cols; i++)
        ar1[i]=ar2[i];
}

void show_array(int rows, int cols, double ar[rows][cols])
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            printf("%5g", ar[i][j]);
        printf("\n");
    }
}