#include<stdio.h>
#define SIZE 40
char * read_char(char st[], int n);
int main()
{
    char test[SIZE];
    printf("Start to test function. Enter a string.\n");
    read_char(test, SIZE);
    printf("The string you input is:\n");
    puts(test);

    return 0;
}

char * read_char(char st[], int n)
{
    int i=0;
    do{
        st[i]=getchar();
        if(st[i]==' ' || st[i]=='\n' || st[i]=='\t')
            break;
    }while(st[i]!=EOF && ++i<n);

    return st;
}