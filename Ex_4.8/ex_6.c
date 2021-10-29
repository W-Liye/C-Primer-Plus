#include<stdio.h>
#include<string.h>
int main()
{
    char firstname[20];
    char lastname[20];
    printf("Please input your firstname: ");
    scanf("%s",firstname);
    printf("Please input your lastname: ");
    scanf("%s",lastname);
    printf("%s %s\n",firstname,lastname);
    printf("%*d %*d\n",strlen(firstname),strlen(firstname),strlen(lastname),strlen(lastname));
    printf("%s %s\n",firstname,lastname);
    printf("%-*d %-*d\n",strlen(firstname),strlen(firstname),strlen(lastname),strlen(lastname));

    return 0;
}