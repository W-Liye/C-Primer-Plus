#include<stdio.h>
int main()
{
    float height;
    char name[40];

    printf("Please input your height and name: ");
    scanf("%f %s",&height,name);
    printf("%s, you are %.3f feet tall",name,height/12.0);

    return 0;    
}