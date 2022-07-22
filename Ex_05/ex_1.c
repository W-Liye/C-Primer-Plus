#include<stdio.h>
#define MIN_POR_HOU 60
int main()
{
    int hours,minutes,input;
    printf("CONVERT MINUTES TO HOURS!\n");
    printf("Please input the number of minutes( <=0 to quit ): ");
    scanf("%d",&input);
    while(input>0)
    {
        hours=input/MIN_POR_HOU;
        minutes=input%MIN_POR_HOU;
        printf("Convert to %d hours and %d minutes.\n",hours,minutes);
        printf("Please input the number of minutes( <=0 to quit ): ");
        scanf("%d",&input);
    }
    printf("PROGRAM EXIT!\n");
    
    return 0;
}