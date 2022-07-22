#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40

int main(void)
{
    FILE *in, *out;
    int ch;
    char sourse[LEN];
    char name[LEN];  //储存输出文件名
    int count = 0;

    printf("Enter a sourse file: ");
    scanf("%s", sourse);
    if((in=fopen(sourse, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", sourse);
        exit(EXIT_FAILURE);
    }
    strncpy(name, sourse, LEN-5);
    name[LEN-5]='\0';
    strcat(name, ".red");  //在文件名后添加.red
    if((out=fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while((ch=getc(in)) != EOF)
        if(count++ % 3 == 0)
            putc(ch, out);
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}