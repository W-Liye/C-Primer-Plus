//多次掷骰子的模拟程序    (于diceroll.c一起编译)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "diceroll.h"
int main()
{
    int dice, roll;
    int sets,i;
    int sides;
    int status;
    srand((unsigned int) time(0));  //随机种子
    printf("Enter the number of sets; enter q to stop.\n");
    while(scanf("%d", &sets) == 1)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d stes of %d %d-sided throws.\n", sets, dice, sides);
        for(i=0; i<sets; i++)
            printf("%4d", roll_n_dice(dice, sides));
        printf("\nHow many sets? Enter q to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD ROUTUNE TO YOU!\n");
    return 0;
}