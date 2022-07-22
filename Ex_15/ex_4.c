#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int get_bit(int n, int pos);
int main(int argc, char * argv[])
{
    if(argc != 3)
    {
        printf("Usage:%s numerical numerical\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    int n = atoi(argv[1]);
    int p = atoi(argv[2]);
    printf("The %d position of %d is %d.\n", p, n, get_bit(n, p));
    return 0;
}

int get_bit(int n, int pos)
{
    const static int size = CHAR_BIT * sizeof(int);
    if(pos < 0 || pos > size)
    {
        printf("Error position.\n");
        return -1;
    }
    // for(int i=0; i<pos; i++)
    //     n >>= 1;
    if((01 & (n>>pos)) == 1)
        return 1;
    else
        return 0;
}