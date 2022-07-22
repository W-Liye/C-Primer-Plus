#include<stdio.h>
#include<stdlib.h>
#define SLEN 256
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char st[256];
    char ch1, ch2;
    
    if(argc < 3)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fp1=fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fp2=fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file \"%s\"\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    do{
        while((ch1=getc(fp1)) != EOF && ch1 != '\n')
            putchar(ch1);
        while((ch2=getc(fp2)) != EOF && ch2 != '\n')
            putchar(ch2);
        putchar('\n');
    }while(ch1 != EOF || ch2 != EOF);  //do_while() 循环**

    fclose(fp1);
    fclose(fp2);
    return 0;
}