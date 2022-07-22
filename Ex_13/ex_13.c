#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void read_data(int row, int col, int data[row][col], FILE *fp);
void write_data(int row, int col, int data[row][col], FILE *fp);
static const char convert[] = {' ', '.', '\'', '\"', '^', '*', '%', '$', '@', '#'};

int main(int argc, char * argv[])
{
    int row = 20;
    int col = 30;
    FILE *fin, *fout;
    int data[row][col];

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

    read_data(row, col, data, fin);
    write_data(row, col, data, fout);

    fclose(fin);
    fclose(fout);
    return 0;    
}

void read_data(int row, int col, int data[row][col], FILE *fp)
{
    int i, j;
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            fscanf(fp, "%d", &data[i][j]);
}

void write_data(int row, int col, int data[row][col], FILE *fp)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%c", convert[data[i][j]]);
            fprintf(fp, "%c", convert[data[i][j]]);
        }
        printf("\n");
        fprintf(fp, "\n");
    }
}