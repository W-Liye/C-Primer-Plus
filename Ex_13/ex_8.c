#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char * s_gets(char * st, int n);
int main(int argc, char * argv[])
{
    char ch;
    int i, count = 0;
    FILE * fp;

    if(argc < 2)
    {
        fprintf(stderr, "Usage: %s character filename_1 filename_2 ... \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if(strlen(argv[1]) != 1)
    {
        printf("The second parameter should be a character\n");
        exit(EXIT_FAILURE);
    }
    if(argc == 2)
    {
        printf("Now you can input the string: ");
        while((ch=getchar()) != EOF)
            if(ch == argv[1][0])
                count++;
        printf("There are %d character '%c' in your input\n", count, argv[1][0]);
    }
    else
    {
        for(i=2; i<argc; i++)
        {
            if((fp=fopen(argv[i], "r")) == NULL)
            {
                printf("Can't open the file %s.\n", argv[i]);
                continue;
            }
            while((ch=getc(fp)) != EOF)
                if(ch == argv[1][0])
                    count++;
            printf("There are %d character '%c' in file %s.\n", count, argv[1][0], argv[i]);
            fclose(fp);
        }
    }
    return 0;
}
