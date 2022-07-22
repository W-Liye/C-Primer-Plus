#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 32

int bstoi(char *st);
char* itobs(int n);

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Usage: %s binary_string binary_string", argv[0]);
        exit(EXIT_FAILURE);
    }
    int result = 0;
    result = ~bstoi(argv[1]);
    printf("~%s result is %s\n", argv[1], itobs(result));
    result = ~bstoi(argv[2]);
    printf("~%s result is %s\n", argv[2], itobs(result));

    result = bstoi(argv[1]) & bstoi(argv[2]);
    printf("%s & %s result is %s\n", argv[1], argv[2], itobs(result));

    result = bstoi(argv[1]) | bstoi(argv[2]);
    printf("%s | %s result is %s\n", argv[1], argv[2], itobs(result));

    result = bstoi(argv[1]) ^ bstoi(argv[2]);
    printf("%s ^ %s result is %s\n", argv[1], argv[2], itobs(result));

    return 0;
}

int bstoi(char *st)  //二进制字符串转化为数字
{
    int sum = 0;
    while(*st != '\0')
    {
        sum *= 2;
        if(*st != '0' && *st != '1')
        {
            printf("The argument should be binary.\n");
            exit(EXIT_FAILURE);
        }
        sum += *st++ - '0';
    }
    return sum;
}

char* itobs(int n)  //数字转化为二进制形式
{
    const int size = CHAR_BIT * sizeof(int);
    static char ps[32 + 1];  //局部静态变量
    for(int i=size-1; i>=0; i--, n>>=1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';
    return ps;
}
