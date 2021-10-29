#include<stdio.h>
int main()
{
    int i;
    int first,end;
    printf("Please enter the first number: ");
    scanf("%d",&first);
    printf("Please enter the end number: ");
    scanf("%d",&end);
    printf("   ori:    square:     cubic:\n");
    for( i=first; i<=end; i++ )
    {
        printf("%6d %10d %10d\n",i,i*i,i*i*i);
    }
    return 0;
}