#include<stdio.h>
#define SIZE 20
char * mystrchr(char *st, char c);
int main()
{
    char str[SIZE]="hello";
    //scanf("%s", str);
    char *p=mystrchr(str, 'l');
    printf("%p\n", p);
    printf("%s\n", p);

    return 0;
}

char * mystrchr(char *st, char c)
{
    do{
        if(*st==c)
            return st;
        st++;
    }while(*st!='\0');

    return NULL;
}