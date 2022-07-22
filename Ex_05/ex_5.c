#include<stdio.h>
int main()
{
    int count, sum, n;
    count=0;
    sum=0;
    printf("Calculates the sum of the first n integers!\n");
    printf("Please input an integer n: ");
    scanf("%d",&n);
    while(count++ < n)
    {
        sum=sum+count;
    }
    printf("sum=%d\n",sum);

    return 0;
}