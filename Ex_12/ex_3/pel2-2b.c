#include<stdio.h>
#include "pel2-2a.h"
int main(void)
{
    int mode;
    int mode0;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode0);
    while(mode>=0)
    {
        //set_mode(mode, mode0);
        get_info(set_mode(mode, &mode0));
        //show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");
    return 0;
}