#include<stdio.h>
int main()
{
    int i,j,k,l;
    char c;
    printf("Please enter a captial letter: ");
    scanf("%c",&c);  
    for( i=0;i<c-'A'+1;i++ )
    {
        char a='A'; 
        for( j=0;j<c-'A'-i;j++ )
        {
            printf(" ");
        }
        for( k=0;k<i+1;k++,a++ )
        {
            printf("%c",a);
        }
        for( l=0,a-=2;l<i;l++,a-- )
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}