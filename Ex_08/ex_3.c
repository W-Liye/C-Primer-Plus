#include<stdio.h>
int main()
{
    int ch;
    int n_cap=0,n_low=0;

    while( (ch=getchar())!=EOF )
    {
        if( ch>=65&&ch<=90 )
            n_cap++;
        else if( ch>=97&&ch<=122 )
            n_low++;
    }
    printf("��д��ĸ��%d   Сд��ĸ��%d",n_cap,n_low);
}