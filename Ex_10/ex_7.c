//二维数组拷贝
#include<stdio.h>
void copy_ptr_2(double ar1[][2], double ar2[][2], int n); 
void copy_ptr(double ar1[], double ar2[], int n);
int main()
{
    int i,j;
    double target[3][2];
    double arr[3][2] = {2.3, 3.3, 1.1, 4.7, 5.3, 54.5};
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
            printf("%g  ",arr[i][j]);
        printf("\n");
    }
    copy_ptr_2(target, arr, 3);
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
            printf("%g  ",target[i][j]);
        printf("\n");
    }
    return 0;
}

void copy_ptr_2(double ar1[][2], double ar2[][2], int n)
{
	int i;
	for(i=0; i<n; i++)
		copy_ptr(ar1[i], ar2[i], 2);
}

void copy_ptr(double ar1[], double ar2[], int n)
{
	int i;
	for(i=0; i<n; i++)
		*(ar1++)=*(ar2++);
}