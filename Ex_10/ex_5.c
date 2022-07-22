#include<stdio.h>
int get_range(int ar[], int n);
int main()
{
    int arr[9]={1,2,334,4,5,6,43,43,44};
    printf("The largest number in array is %d.", get_range(arr, 9));
}

int get_range(int ar[], int n)
{
    int i;
    int min=ar[0],max=ar[0];
    for(i=0; i<n; i++)
    {
        if(max < ar[i])
            max=ar[i];
        if(min > ar[i])
            min=ar[i];
    }
    return max-min;
}