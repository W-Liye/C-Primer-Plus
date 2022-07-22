#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define row 20
#define col 30

int main(void)
{
    FILE *fin, *fout;
    int data[row][col];
    int i, j;

    char convert[10] = {' ', '.', '\'', '\"', '^', '*', '%', '$', '@', '#'};
    if((fin=fopen("data", "r")) != NULL)
    {
        fprintf(stderr, "Can't open the file data");
        exit(EXIT_FAILURE);
    }
    if((fout=fopen("graphic", "w")) != NULL)
    {
        fprintf(stderr, "Can't open the file graphic");
        exit(EXIT_FAILURE);
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            fscanf(fin, "%d", &data[i][j]);
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c", convert[data[i][j]]);
            fprintf(fout, "%c", convert[data[i][j]]);
        }
        printf("\n");
        fprintf(fout, "\n");
    }
    fclose(fin);
    fclose(fout);
    return 0;
}