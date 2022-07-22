#include<stdio.h>
#include<limits.h>
int bitnum(int n);
int main(void)
{
    int n;
    do{
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if(n == 0)
            break;
        printf("%d\n", bitnum(n));
    }while(n != 0);

    return 0;
}

int bitnum(int n)
{
    int count = 0;
    const int size = CHAR_BIT * sizeof(int);
    for(int i=0; i<size; i++, n>>=1)
    {
        if((01 & n) == 1)
            count++;
    }
    return count;
}