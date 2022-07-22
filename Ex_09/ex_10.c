//进制转化（递归输出）
#include<stdio.h>
void to_base_n(unsigned long x, int n);

int main(void)
{
    unsigned long number;
    int n;
    printf("Enter an integer (q to quit):");
    while(scanf("%lu", &number)==1)
    {
        do{
            printf("Enter an integer(2 to 10): ");
            scanf("%d", &n);
            if(n<2 || n>10)
                printf("Out of range! Please try again.\n");
        }while(n<2 || n>10);
        
        printf("%d-in system is: ", n);
        to_base_n(number, n);
        putchar('\n');
        printf("Enter an integer (q to quit): ");
    }
    printf("Done!");

    return 0;
}

void to_base_n(unsigned long x, int n)
{
    int r;

    r=x%n;
    if(x>=n)
        to_base_n(x/n, n);
    printf("%d",r);

}