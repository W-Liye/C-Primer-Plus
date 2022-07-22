#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SLEN 81
char * s_gets(char *st, int n);
int main(void)
{
    char ch;
    FILE * fs;  //原始文件指针
    FILE * ft;  //目标文件指针
    char sourse[SLEN];
    char dest[SLEN];

    printf("Enter a sourse file: ");
    s_gets(sourse, SLEN);
    printf("Enter a dest file: ");
    s_gets(dest, SLEN);

    if((fs=fopen(sourse, "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s for read.\n", sourse);
        exit(EXIT_FAILURE);
    }
    if((ft=fopen(dest, "w")) == NULL)
    {
        fprintf(stderr, "Can't open file %s for write.\n", dest);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(fs)) != EOF)
        putc(toupper(ch), ft);
    fclose(fs);
    fclose(ft);

    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}