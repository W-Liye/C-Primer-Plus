#include<stdio.h>
#include<stdlib.h>
#define MAX 41
int main(int argc, char *argv[])
{
    int i;
    char ch;
    FILE * fp;
    char words[MAX];
    for(i=1; i<argc; i++)
    {
        if((fp=fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        while((ch=getc(fp)) != EOF)  //getc()顺序读取文件字符并输出
            putc(ch, stdout);    
        printf("\n");
        fclose(fp);
    }

    for(i=1; i<argc; i++)
    {
        if((fp=fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        while(fscanf(fp, "%s", words) == 1)  //fscanf()读到空白字符停止（不保留空白字符）
            fprintf(stdout, "%s ", words);  
        printf("\n");
        fclose(fp);
    }

    for(i=1; i<argc; i++)
    {
        if((fp=fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        while(fgets(words, MAX, fp) != NULL)  //fgets()读到换行符后面、文件结尾、MAX-1个字符停止
        {
            fputs(words, stdout);
            printf("**");
        }
        printf("\n");
        fclose(fp);
    }
    return 0;
}