#include<stdio.h>
#include<stdbool.h>
int main()
{
    long n;
    long num;
    int i;
    bool isPrime;
    do{
        printf("Please enter a positive integer(0 to quit): ");
        scanf("%ld",&n);
        if( n<2 )
        {
            if( n==0 )
                break;
            printf("%ld is out of range,retry!\n",n);
            continue;
        }

        for( num=2;num<=n;num++ )
        {
            for( i=2,isPrime=true;i<num;i++ )
            {
                if( num%i==0 )
                    isPrime=false;
            }

            if( isPrime )
                printf("%ld ",num);
        }
        printf("\n");

    }while( n!=0 );
    printf("Done!\n");
    return 0;
}