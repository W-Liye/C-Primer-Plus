#include<stdio.h>
int main()
{
    int i,count;
    printf("Please enter the number of sums: ");
    scanf("%d",&count);
    while(count>0)
    {
        double sum1=0.0,sum2=0.0;
        for( i=1;i<=count;i++ )
        {
            sum1+=1.0/i*1.0;
        }
        for( i=1;i<=count;i++ )
        {
            if(i%2==0)
                sum2-=1.0/i*1.0;
            else
                sum2+=1.0/i*1.0;
        }
        printf("The sum1 of the first %d items is %lf\n",count,sum1);
        printf("The sum2 of the first %d items is %lf\n",count,sum2);
        printf("Please enter the number of sums: ");
        scanf("%d",&count);
    }
    return 0;
}