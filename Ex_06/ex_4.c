#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    for( i=0;i<6;i++ )
    {
        for( j=0;j<i+1;j++,c++ )
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}