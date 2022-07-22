#include<stdio.h>
int main()
{
    int a,b;
    printf("This program computes moduli.\n");
    printf("Enter an intrger to serve as the second operand: ");
    scanf("%d",&b);
    printf("Now enter the first operand(<=0 to quit): ");
    scanf("%d",&a);
    while(a>0)
    {
        printf("%d %% %d is %d\n",a,b,a%b); 
        printf("Now enter the first operand(<=0 to quit): ");
        scanf("%d",&a);      
    }
    printf("Done");
    return 0;
}