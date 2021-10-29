#include<stdio.h>
int main()
{
    int bigint = 2147483647; //int类型最大为2^31-1
    float toobig=3.4e38;     //float的指数决定了最大值为2^128
    float toosmall=10.0/3;   //float有效位数为6

    printf("%e\n",toobig*10);
    printf("%d\n",bigint+1);
    printf("%f\n",toosmall);

    return 0;
}