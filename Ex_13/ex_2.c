#include<stdio.h>
#include<stdlib.h>
#define BUFFER_SIZE 512
int main(int argc, char *argv[])
{
    FILE *fa, *fs;
    char buff[BUFFER_SIZE];
    if(argc != 3)
    {
        printf("Usage: %s scr_file dest_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fs=fopen(argv[1], "rb")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fa=fopen(argv[2], "wb")) == NULL)
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    size_t bytes;
    while((bytes=fread(buff, sizeof(char), BUFFER_SIZE, fs)) > 0)
        fwrite(buff, sizeof(char), bytes, fa);
    fclose(fa);
    fclose(fs);
    return 0;
}