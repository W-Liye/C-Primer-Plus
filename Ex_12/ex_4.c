#include<stdio.h>
int run_counter(int n);
int main()
{
    int count=0;
    int i;
    for(i=0; i<100; i++)
        printf("The function run_time run %d times.\n", run_counter(++count));
    return 0;
}

int run_counter(int n)
{
    return n;
}