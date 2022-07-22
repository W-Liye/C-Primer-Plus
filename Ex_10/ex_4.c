#include<stdio.h>
int get_max(double ar[], int n);
int main()
{
    double arr[99] = {1.2, 3.44, 55.3, 97.5, 2332.33};
    printf("The largest number's index in array is %d.", get_max(arr, 99));
    return 0;
}

int get_max(double ar[], int n)
{
    int i,max=0;
    int index;
    for(i=0; i<n; i++)
    {
        if(max < ar[i])
        {
            max=ar[i];
            index=i;
        }    
    }
    return index;
}