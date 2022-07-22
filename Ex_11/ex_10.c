#include<stdio.h>
#define SIZE 40
void trim_str(char *st);
int main()
{
    char str[SIZE];
    puts("Please input a string (black to quit):");
    fgets(str, SIZE, stdin);
    while(str[0]!='\n')
    {
        trim_str(str);
        printf("Now the trim string is: %s\n", str);
        puts("Please input a string (black to quit):");
        fgets(str, SIZE, stdin);
    }
    return 0;
}

void trim_str(char *st)
{
    char *head=st;  //两个指针 表示原串和删除串
    int count = 0;
    while(*st != '\0')
    {
        if(*st != ' ')
            *head++ = *st++;
        else{
            st++;
            count++;
        }
    }
    while(count--)
        *head++='\0';  //删除字符后，末尾添加空字符 清除原来字符
}