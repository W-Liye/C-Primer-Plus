#include<stdio.h>
int main()
{
    int input;
    printf("Enter a value of char int ASCII: ");
    scanf("%d",&input);
    printf("Your input value is %d, and char is %c.", input, input); //通过%d和%c转换打印格式

    return 0;
}