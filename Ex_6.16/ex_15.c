#include<stdio.h>
#include <string.h>
int main()
{
    char input[256];
    int i=0;
    printf("Please enter a line of date: ");

//while循环读取输入
    scanf("%c",&input[i]);
    while(input[i]!='\n')
    {
        i++;
        scanf("%c",&input[i]);
    }
//do while循环读取输入
    // do{
    //     i++;
    //     scanf("%c",&input[i]);
    // }while(input[i]!='\n');

    for( i--;i>=0;i-- )
    {
        printf("%c",input[i]);
    }
    return 0;
}