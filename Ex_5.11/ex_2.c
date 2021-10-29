#include<stdio.h>
int main()
{
    int i=0;
    int integer;
    printf("Please input an integer:");
    scanf("%d",&integer);

    while(i++<=10)
        printf("%d ",integer++);

    return 0;
}