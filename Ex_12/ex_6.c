#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int count[10]={0};
    int i;
    srand((unsigned int) time(0));
    for(i=0; i<1000; i++)
    {
        count[rand()%10+1]++;
    }

    for(i=1; i<=10; i++)
        printf("%d ", count[i]);
    return 0;
}