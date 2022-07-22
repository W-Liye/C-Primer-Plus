#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[100];
    int i,j,temp;
    srand((unsigned int) time(0));  //随机种子
    for(i=0; i<100; i++)
    {
        a[i]=rand()%10+1;
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0; i<100-1; i++)
    {
        for(j=0; j<100-1-i; j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<100; i++)
        printf("%d ", a[i]);
    
    return 0;

}