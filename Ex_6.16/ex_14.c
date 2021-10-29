#include<stdio.h>
int main()
{
    double a[8],b[8];
    int i,j;
    printf("Please enter eight numbers: ");
    for( i=0;i<8;i++ )
    {
        scanf("%lf",&a[i]);
    }
    b[0]=a[0];
    for( j=1;j<8;j++ )
    {
        b[j]=b[j-1]+a[j];
    }
    for( i=0;i<8;i++ )
    {
        printf("%10lf",a[i]);
    }
    printf("\n");
    for( j=0;j<8;j++ )
    {
        printf("%10lf",b[j]);
    }
    return 0;
}