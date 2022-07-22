#include<stdio.h>
int main()
{
    char firstname[20];
    char lastname[20];

    printf("Please enter your name: ");
    scanf("%s %s",firstname,lastname);
    printf("%s,%s",firstname,lastname);

    return 0;
}