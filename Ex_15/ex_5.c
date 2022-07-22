#include<stdio.h>
#include<stdlib.h>
int rotate_l(unsigned int n, int p);  //把高阶位移出的位放入低阶位
int main(int argc, char * argv[])
{
    if(argc != 3)
    {
        printf("Usage:%s numerical numerical\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    unsigned int n = atoi(argv[1]);
    int p = atoi(argv[2]);
    printf("the %d move %d bit, result is %d\n", n, p, rotate_l(n, p));
    return 0;
}

int rotate_l(unsigned int n, int p)
{
    const int size = CHAR_BIT * sizeof(unsigned int);
    printf("size = %d\n", size);
    //printf("%d", size << 31);
    if(p < 0 || p > size)
    {
        printf("Error position.\n");
        return 0;
    }    
    for(int i=0; i<p; i++)
    {
        if(n & (01 << (size-1))){
            n <<= 1;
            n |= 1;
        }else
            n <<= 1;
    }
    return n;
}