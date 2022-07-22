#include<stdio.h>
#include<string.h>
#include<math.h>
int number(char * pbin);
int bstoi(char * pbin);
int main(void)
{
    char * pbin = "01001001";
    printf("%d\n", bstoi(pbin));
    printf("%d", number(pbin));
    return 0;
}

int number(char * pbin)
{
    int num = 0;
    int n = strlen(pbin);
    for(int i=n-1; i>=0; i--, pbin++)
    {
        if(*pbin == '1')
            num += pow(2, i);
    }
    //printf("%d\n", num);
    return num;
}

int bstoi(char * pbin)
{
    //通过循环每一位上的值都持续乘以2，
    //最终实现位值上数据的持续增长，该方法是从高位开始累积
    int sum = 0;
    while(*pbin != '\0')
    {
        sum *= 2;
        sum += *pbin++ - '0';
    }
    return sum;
}