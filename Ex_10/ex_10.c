//两数组相加
#include<stdio.h>
void sum_array(int ar[], int ar1[], int ar2[], int n);
void show_array(int * ar, int n);
int main()
{
    int arr1[4] = {2, 4, 5, 8};
    int arr2[4] = {1, 0, 4, 6};
    int arr_sum[4];
    sum_array(arr_sum, arr1, arr2, 4);
    show_array(arr1, 4);
    show_array(arr2, 4);
    show_array(arr_sum, 4);

    return 0;
}

void sum_array(int ar[], int ar1[], int ar2[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        ar[i]=ar1[i]+ar2[i];
    }
}

void show_array(int * ar, int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d  ", *(ar++));
    printf("\n");
}