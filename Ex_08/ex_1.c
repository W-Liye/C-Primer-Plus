#include<stdio.h>
int main()
{
    int n=0;
    int ch;
    while( (ch=getchar())!=EOF )
        n++;
    
    printf("The file has %d characters.\n",n);
    return 0;
}