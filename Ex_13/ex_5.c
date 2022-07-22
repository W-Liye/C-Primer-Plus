//把文件附加到另一个文件末尾
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *sourse, FILE *dest);
//char * s_gets(char *st, int n);

int main(int argc, char *argv[])
{
    FILE *fa, *fs;  //fa指向目标文件， fs指向源文件
    int files=0;    //附加的文件数量
    int ch;
    int i;

   
    if((fa=fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)  //创建缓冲区
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }

    for(i=2; i<argc; i++)
    {
        if(strcmp(argv[i], argv[1]) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if((fs=fopen(argv[i], "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", argv[i]);
        else
        {
            if(setvbuf(fs, NULL, _IOFBF, BUFSIZ) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if(ferror(fs) != 0)  //读或写出现错误
                fprintf(stderr, "Error in reading file %s.\n", argv[i]);
            if(ferror(fa) != 0)
                fprintf(stderr, "Error in writing file %s.\n", argv[1]);
            fclose(fs);
            files++;
            printf("File %s appended!!!\n", argv[i]);
            //puts("Next file (empty line to quit):");
        }
    }
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    printf("%s contents:\n", argv[1]);
    while((ch=getc(fa)) != EOF)
        putchar(ch);
    puts("Done displaying.");
    fclose(fa);

    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];

    while((bytes=fread(temp, sizeof(char), BUFSIZE, source)) > 0)  //返回成功读取项的数量
        fwrite(temp, sizeof(char), bytes, dest);
}