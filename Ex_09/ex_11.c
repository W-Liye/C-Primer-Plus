//计算斐波那契数
#include<stdio.h>
unsigned long Fibonacci(unsigned n);
int main()
{
    unsigned int n;
    printf("Enter a positive integer (q to quit): ");
    while(scanf("%u", &n)!=0)
    {
        //Fibonacci(n);
        printf("Fibonacci(%u)=%lu.\n", n, Fibonacci(n));
        printf("Enter a positive integer (q to quit): ");
    }

    return 0;
}

unsigned long Fibonacci(unsigned n)  //用循环计算
{
    int i;
    int a=1, b=1;
    if(n<=2)
        return 1;
    for(i=0; i<n-2; i++)
    {
        b=b+a;
        a=b-a;
    }
    return b;
}

// unsigned long Fibonacci(unsigned n)  //用双递归计算
// {
//     if(n>2)
//         return Fibonacci(n-1) + Fibonacci(n-2);
//     else 
//         return 1;
// }