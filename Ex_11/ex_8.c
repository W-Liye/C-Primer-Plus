#include<stdio.h>
#include<string.h>
#define SIZE 40
char *string_in(char *s1, char *s2);
int main()
{
    char s1[SIZE];
    char s2[SIZE];
    puts("Please input a string (s1):");
    fgets(s1, SIZE, stdin);
    puts("Enter a string to find (s2):");
    fgets(s2, SIZE, stdin);
    while(s2[0]!='\n')
    {
        char *p = string_in(s1, s2);
        printf("done! %s\n", p);
        puts("Enter a string to find (s2):");
        fgets(s2, SIZE, stdin);
    }
    return 0;
}

char * string_in(char *s1, char *s2)
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        while(s1[i+j]==s2[j])
            j++;
        if(j==strlen(s2)-1)
            return s1+i;
        else
            j=0;
        i++;
    }
    return NULL;
}