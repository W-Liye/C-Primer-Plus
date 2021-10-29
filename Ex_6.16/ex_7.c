#include<stdio.h>
#include<string.h>
int main()
{
    char word[30];
    int i;
    printf("Please enter the word: ");
    scanf("%s",word);
    printf("The word you enter is: %s\n",word);
    printf("The reverse word you enter is: ");
    for( i=strlen(word)-1;i>=0;i-- )
    {
        printf("%c",word[i]);
    }
    return 0;
}