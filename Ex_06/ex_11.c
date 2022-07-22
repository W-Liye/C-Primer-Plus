#include<stdio.h>
int main()
{
    int i;
    int inte[8];
    printf("Please enter eight integers: ");
    for( i=0;i<8;i++ )
    {
        scanf("%d",&inte[i]);
    }
    for( i=7;i>=0;i-- )
    {
        printf("%d",inte[i]);
    }
    return 0;
}