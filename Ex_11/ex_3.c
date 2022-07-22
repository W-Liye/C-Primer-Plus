#include<stdio.h>
#include<ctype.h>
#define SIZE 40
void get_word(char * ar);
int main(void)
{
    char str[SIZE];

    printf("Enter some characters:\n");
    get_word(str);
    puts(str);

    return 0;
}

void get_word(char * ar)
{
    char ch;
    while(isspace(ch=getchar()))
        continue;
    
    do{
        *ar++=ch;
    }while(!isspace(ch=getchar()));
    *ar='\0';
}