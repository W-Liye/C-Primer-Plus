#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 256
void read_char(char *st, int n);
int main()
{
    char str[SIZE];
    printf("Enter a string.\n");
    read_char(str, SIZE);

    return 0;
}

void read_char(char *st, int n)
{
    int i=0;
    int start=0;
    int words=0,upper=0,lower=0,digit=0,punct=0;
    do{
        st[i]=getchar();
        
        if(isupper(st[i]))
            upper++;
        else if(islower(st[i]))
            lower++;
        else if(isdigit(st[i]))
            digit++;
        else if(ispunct(st[i]))
            punct++;        
    }while(st[i]!=EOF && ++i<n);
    
    //printf("words--%d\nupper--%d\nlower--%d\ndigit--%d\npunct--%d\n", words, upper, lower, digit, punct);

    /* 单词数统计，遇见第一个字母设置标记位，遇见非字符，标记位标记时
     * 单词数加 1 标记位清空。否则继续移动。 */
    for(i=0; st[i]!=EOF; i++)
    {
        if(isalpha(st[i])==0 && start==0){

        }
        else if(isalpha(st[i])==0 && start==1){
            words++;
            start=0;
        }else if(isalpha(st[i])!=0){
            start=1;
        }
    }
    if(start==1)
        words++;

    printf("words--%d\nupper--%d\nlower--%d\ndigit--%d\npunct--%d\n", words, upper, lower, digit, punct);
}