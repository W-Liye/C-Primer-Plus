#include<stdio.h>
int main()
{
    char letter[26];
    int i;
    for( i=0;i<26;i++ )
    {
        letter[i]='a'+i;
    }
    for( i=0;i<26;i++ )
    {
        printf("%c",letter[i]);
    }
    return 0;
}