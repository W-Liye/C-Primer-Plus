//使用fprintf()、fscanf()、rewind()
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41
int get_number(FILE *fp);

int main(void)
{
    FILE *fp;
    char words[MAX];
    if((fp=fopen("words", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"words\" file.\n");
        exit(EXIT_FAILURE);
    }

    int number = get_number(fp);
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%d.%s\n", ++number, words);
    
    puts("File contents:");
    rewind(fp);   //返回到文件开始处
    while(fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done.");
    if(fclose(fp) != 0)
        fprintf(stderr, "Enter closing file\n");

    return 0;
}

int get_number(FILE *fp)
{
    int number=0;
    char temp[MAX];
    rewind(fp);
    while(fgets(temp, MAX, fp) != NULL)
        number++;
    return number;
}