#include<stdio.h>
int main(int argc, char *argv[])
{
    int count;
    for(count=1; count<argc; count++)
        printf("%s ", argv[count]);
    printf("\n");
    
    for(count=argc-1; count>0; count--)
        printf("%s ", argv[count]);

    return 0;
}