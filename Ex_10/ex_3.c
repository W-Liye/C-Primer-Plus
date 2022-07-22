#include<stdio.h>
int get_max(int ar[], int n);
int main()
{
    int arr[100]={1,2,334,4,5,6};
    printf("The largest number in array is %d.", get_max(arr, 100));
}

int get_max(int ar[], int n)
{
    int i,max=0;
    for(i=0; i<n; i++)
    {
        if(max < ar[i])
            max=ar[i];
    }
    return max;
}