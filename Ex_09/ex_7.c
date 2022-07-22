#include<stdio.h>
void get_char(void);
int back(char ch);
int main()
{
    printf("Enter the chars(ended by EOF): ");
    get_char();
    
    return 0;
}

void get_char(void)
{
    char ch;
    while( (ch=getchar())!=EOF )
    {
        // if ( (ch=getchar())=='\n' )
        //     continue;
        if( back(ch)==-1 )
            printf("%c is not a alphabet.\n",ch);
        else
            printf("The char %c's position in alphabet is %d.\n",ch, back(ch));
    }
}

int back(char ch)
{
    if( ch>='a'&&ch<='z' )
        return ch-'a'+1;
    if( ch>='A'&&ch<='Z' )
        return ch-'A'+1;
    return -1;
}