#include<stdio.h>
int main()
{
    int ch;
    int count=0;
    printf("Please input chars(# for exit): ");
    while( (ch=getchar())!='#' )
    {
        switch (ch)
        {
            case '.':   printf("!");
                        count++;
                        break;
            case '!':   printf("!!");
                        count++;
                        break;
            default:    printf("%c",ch);
                        break;
        }
    }
    printf("There are %d replacements.",count);
    return 0;
}