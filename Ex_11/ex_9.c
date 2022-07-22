#include<stdio.h>
#include<string.h>
#define SIZE 40
void str_anti(char *st);
int main()
{
    char str[SIZE];
    puts("Please input a string:");
    fgets(str, SIZE, stdin);
    while(str[0]!='\n')
    {
        str_anti(str);
        puts(str);
        puts("Please input a string:");
        fgets(str, SIZE, stdin);
    }
    return 0;
}

void str_anti(char *st)
{
    int i;
    int n = strlen(st)-1;
    char temp;
    for(i=0; i<strlen(st)/2; i++,n--)
    {
        temp=st[i];
        st[i]=st[n];
        st[n]=temp;
    }
}