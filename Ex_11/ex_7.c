#include<stdio.h>
#define SIZE 40
char * mystrncpy(char *s1, char *s2, int n);
int main()
{
    int n=10;
    char s1[SIZE];
    char s2[SIZE];
    printf("Please input a string:\n");
    fgets(s2, SIZE, stdin);
    while(1)
    {
        int i=0;
        while(i<SIZE)   
            s1[i++]='\0';  //重置s1数组
        printf("Please enter number of char you need to copy: ");
        scanf("%d", &n);
        if(n==0)
            break;
        mystrncpy(s1, s2, n);
        puts(s1);
    }
    return 0;
}

char * mystrncpy(char *s1, char *s2, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        s1[i]=s2[i];
        if(s2[i]=='\0')
            break;
    }
    while(i<n)
        s1[++i]='\0';
    return s1;
}
