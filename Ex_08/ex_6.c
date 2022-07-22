#include<stdio.h>
char get_first(void);
int main()
{
    char ch;
    ch=get_first();
    printf("%c",ch);

    return 0;
}

char get_first(void)
{
    char ch;
    do{
        ch=getchar();  
    } while (ch==' '||ch=='\n'||ch=='\t');
    
    return ch;
}