#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUF 256
#define SLEN 81
char * s_gets(char *st, int n);
int main(void)
{
    FILE *fp;
    char filename[SLEN];
    int i;
    char ch;
    
    printf("Enter the filename: ");
    s_gets(filename, SLEN);
    if((fp=fopen(filename, "r")) == NULL)
    {
        fprintf(stderr, "Can't open the file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    printf("Input the position to read (q or -1 to quit): ");
    scanf("%d", &i);
    fseek(fp, i, SEEK_SET);
    while((ch=getc(fp)) != '\n')
        putc(ch, stdout);
    fclose(fp);
    return 0;
}

char * s_gets(char * st, int n)
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