#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUF 256
#define SLEN 81
char * s_gets(char *st, int n);
int main(int argc, char * argv[])
{
    FILE *fp;
    char st[BUF];
    char *ret_val;

    if(argc < 3)
    {
        fprintf(stderr, "Usage: %s string filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    do{
        if((ret_val=fgets(st, SLEN, fp)) != NULL)
        {
            if(strstr(st, argv[1]) != NULL)
                fputs(st, stdout);
        }
    }while(ret_val != NULL);
    fclose(fp);
    return 0;
}