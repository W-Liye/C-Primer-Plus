#include<stdio.h>
#include<ctype.h>
#define SIZE 20
void get_word(char *ar, int n);
int main(int argc, char *argv[])
{
    char str[SIZE];
    get_word(str, SIZE);
    printf("First word you input is: %s\n", str);

    return 0;
}

void get_word(char *ar, int n)
{
    char ch;
    int i=0;
    puts("Enter a String:");
    while(isspace(ch=getchar()))
        continue;

    do{
        ar[i++]=ch;
    }while(!isspace(ch=getchar()) && i<n);
    ar[i]='\0';
}