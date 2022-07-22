#include<stdio.h>
void reverse(double ar[], int n);
int main()
{
    int i;
    double arr[5] = {4.4, 5.4, 3.3, 9.9, 14.1};
    reverse(arr, 5);
    printf("数组数据倒序排列后：\n");
    for(i=0; i<5; i++)
        printf("%g  ",arr[i]);

        return 0;
}

void reverse(double ar[], int n)
{
    int i;
    double temp=0;
    for(i=0; i<n/2; i++)
    {
        temp=ar[i];
        ar[i]=ar[n-1-i];
        ar[n-1-i]=temp;
    }
}