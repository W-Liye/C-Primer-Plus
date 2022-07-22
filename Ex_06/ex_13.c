#include<stdio.h>
int main()
{
    int i,j,inte[8];
    for( i=0;i<8;i++ )
    {
        inte[i]=1;
        for( j=0;j<=i;j++ )
        {
            inte[i]*=2;
        }
    }
    
    i=0;
    do{
        printf("%d ",inte[i++]);
    }while(i<8);
    return 0;
}