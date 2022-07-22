#include<stdio.h>
#include<stdlib.h>
#define SLEN 256
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char st[256];
    char * ret_val1, *ret_val2;
    
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
        if((ret_val1=fgets(st, SLEN, fp1)) != NULL)
            fputs(st, stdout);
        if((ret_val2=fgets(st, SLEN, fp2)) != NULL)
            fputs(st, stdout);
    }while(ret_val1 != NULL || ret_val2 != NULL);

    fclose(fp1);
    fclose(fp2);
    return 0;
}