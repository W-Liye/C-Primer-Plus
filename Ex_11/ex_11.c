#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIM 10
#define SIZE 40
void puts_ascii(char *st[], int n);
void puts_length(char *st[], int n);
void puts_wordlength(char *st[], int n);
int main()
{
    int i,j,choice;
    char str[LIM][SIZE];
    char *ptr[LIM];
    printf("Enter 10 strings (black to quit):\n");
    for(i = 0; i<10; i++){
        fgets(str[i],SIZE,stdin);
        if(str[i][0]=='\n')
             break;
    }
    for(j=0; j<i; j++)
        ptr[j]=str[j]; //设置指针指向字符串

    do{
        puts("=======================================");
        puts("1)print original strings\n2)print string by ascii order\n3)printf string by length\n4)print string by word length\n5)quit");
        puts("=======================================");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for(j=0; j<i; j++)
                printf("%d. %s", j, str[j]);
            break;
        case 2:
            puts_ascii(ptr, i);
            break;
        case 3:
            puts_length(ptr, i);
            break;
        case 4:
            puts_wordlength(ptr, i);
            break;
        case 5:
            break;
        default:
            puts("ERROR!");
            break;
        }
    }while(choice!=5);
    return 0;
}

void puts_ascii(char *st[], int n)
{
    int i,j;
    char *temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(strcmp(st[j], st[j+1])>0)
            {
                // strcpy(temp, st[j]);
                // strcpy(st[j], st[j+1]);
                // strcpy(st[j+1], temp);
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d. %s", i, st[i]);
}

void puts_length(char *st[], int n)
{
    int i,j;
    char *temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(strlen(st[j])>strlen(st[j+1]))
            {
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d. %s", i, st[i]);
}

void puts_wordlength(char *st[], int n)
{
    int fi_wordlen[n];
    int i,j;
    int temp1;
    char *temp;
    for(i=0; i<n; i++)
    {
        j=0;
        int count=0;
        while(isspace(st[i][j++]))
            continue;
        do{
            count++;
        }while(!isspace(st[i][j++]) && st[i][j]!='\0');
        fi_wordlen[i]=count;
        //printf("%d\n", fi_wordlen[i]);
    }   
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(fi_wordlen[j]>fi_wordlen[j+1])
            {
                temp1=fi_wordlen[j];
                fi_wordlen[j]=fi_wordlen[j+1];
                fi_wordlen[j+1]=temp1;
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%d. %s", i, st[i]);
}