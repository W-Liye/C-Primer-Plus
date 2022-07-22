#include<stdio.h>
#include<ctype.h>
int myatio(char *st);
int main()
{
    char str[40];
    gets(str);
    //fgets会存储换行符
    //fgets(str, 40, stdin);   
    printf("The number is %d", myatio(str));

    return 0;
}

int myatio(char *st)
{
    int sum=0;

    while(*st)
    {
        if(isdigit(*st))
            sum=10*sum+(*st-'0');
        else
            return 0;
        st++;
    }

    return sum;
}