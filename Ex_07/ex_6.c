#include<stdio.h>
int main()
{
    char ch,c_h='w';
    int count=0;
    printf("Please input chars(# for exit): ");
    while( (ch=getchar())!='#' )
    {
        if( c_h=='e'&&ch=='i' )
            count++;
    
        c_h=ch;
    }
    printf("'ei' appeared %d times.",count);
    return 0;
}