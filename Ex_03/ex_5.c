#include<stdio.h>
int main()
{
    float age;   //由于数值需要，年龄也使用浮点型数据。
    printf("Please enter your age: ");   
    scanf("%f",&age);
    printf("Your are %e seconds old.",age*3.156e7);

    return 0;
}