#include<stdio.h>
int main()
{
    int counter=0;
    char ch;

    while( (ch=getchar())!=EOF )
    {
        if( counter++==10 )
        {
            printf("\n");
            counter=1;
        }
        if( ch>'\040' )
            printf(" \'%c\'--%3d",ch,ch);
        else if( ch=='\t' )
            printf(" \'\\t\'--%3d",ch);
        else if( ch=='\n' )
            printf(" \'\\n\'--%3d\n",ch);
        else
            printf(" \'^%c\'--%3d",ch+64,ch);
           
    }
    return 0;
}