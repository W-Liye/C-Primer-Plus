#include<stdio.h>
#define DAY_POR_WEE 7
int main()
{
    int input;
    printf("CONVERT DAYS TO WEEKS!\n");
    printf("Please input the number of days( <=0 to quit ): ");
    scanf("%d",&input);
    while(input>0)
    {
        printf("%d days are %d weeks, %d days.\n",input,input/DAY_POR_WEE,input%DAY_POR_WEE);
        printf("Please input the number of days( <=0 to quit ): ");
        scanf("%d",&input);
    }
    printf("PROGREM EXIT!");

    return 0;
}