#include<stdio.h>
int main()
{
    int low,upp;
    int i;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d",&low,&upp);
    while( low<upp )
    {
        int sum=0;
        for( i=low;i<=upp;i++ )
        {
            sum+=i*i;
        }
        printf("The sums of the squares from %d to %d is %d\n",low*low,upp*upp,sum);
        printf("Enter next set of limits: ");
        scanf("%d %d",&low,&upp);
    }
    printf("Done\n");
    return 0;
}