//二维数组各值翻倍
#include<stdio.h>
#define ROWS 3
#define COLS 5
void show_array(int ar[][COLS], int rows);
void double_array(int ar[][COLS], int rows);
int main()
{
    int arr[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    show_array(arr, ROWS);
    double_array(arr, ROWS);
    show_array(arr, ROWS);

    return 0;
}

void show_array(int ar[][COLS], int rows)
{
    int i,j;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<COLS; j++)
            printf("%d  ", ar[i][j]);
        printf("\n");
    }     
}

void double_array(int ar[][COLS], int rows)
{
    int i,j;
    for(i=0; i<rows; i++)
        for(j=0; j<COLS; j++)
            ar[i][j]*=2;
}