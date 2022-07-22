#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 156
int main(int argc, char *argv[])
{
    char test[SIZE];
    printf("Enter a string to convert:");
    fgets(test, SIZE, stdin);
    char *st=test;
    if(argc==1)
        puts(test);
    else if(!strcmp(argv[1], "-p"))
        puts(test);
    else if(!strcmp(argv[1], "-u"))
        while(*st!=EOF && *st!='\0')
            putchar(toupper(*st++));
    else if(!strcmp(argv[1], "-l"))
        while(*st!=EOF && *st!='\0')
            putchar(tolower(*st++));
    return 0;
}