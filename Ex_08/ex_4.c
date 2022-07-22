#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int words=0,letter=0;

    while( (ch=getchar())!=EOF )
    {
        if( isalpha(ch)!=0 )  //ch是字母返回非0
            letter++;
        if( ispunct(ch)!=0||ch==' '||ch=='\n' )   //判断标点符号
            words++;
    }
    printf("There are %d words, %d character, %lf C/W.\n",words,letter,letter*1.0/words);
    return 0;
}