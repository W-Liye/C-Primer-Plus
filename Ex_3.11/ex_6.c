#include<stdio.h>
#define quality 3.0e-23  //通过预编译指令定义水分子质量
int main(void)
{
    float quart,number;
    printf("Please enter the quarts of water: ");
    scanf("%f",&quart);
    number=quart*950/quality;
    printf("The number of water molecules is %e",number);

    return 0;
}