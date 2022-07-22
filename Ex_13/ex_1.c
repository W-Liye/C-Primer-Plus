#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ch;
    char file[81];
    FILE *fp;
    unsigned long count = 0;
    puts("Enter the name of the file:");
    scanf("%80s", file);
    if((fp=fopen(file, "r")) == NULL)
    {
        printf("Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("\nFile %s has %lu kcharacters\n", file, count);
    return 0;
}