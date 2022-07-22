#include<stdio.h>
int is_within(char c, const char *st);
#define SIZE 20
int main()
{
    char ch='  ';
    char str[SIZE];
    printf("Please input a string:\n");
    fgets(str, SIZE, stdin);
    while(ch != EOF)
    {
        printf("Enter a char to find (EOF to Quit): ");
        while((ch=getchar())=='\n')
            continue;
        printf("%d\n", is_within(ch, str));
    }
    return 0;
}

int is_within(char c, const char *st)
{
    do{
        if(*st++ == c)
            return 1;
    }while(*st != '\n');

    return 0;
}