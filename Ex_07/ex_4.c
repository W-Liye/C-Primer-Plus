#include<stdio.h>
int main()
{
    int ch;
    int count=0;
    printf("Please input chars(# for exit): ");
    while( (ch=getchar())!='#' )
    {
        if( ch=='.' ){
            printf("!");
            count++;
        }else if( ch=='!' ){
            printf("!!");
            count++;
        }else
            printf("%c",ch);
    }
    printf("There are %d replacements.",count);
    return 0;
}