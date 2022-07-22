#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        puts("Error!");
        return 0;
    }

    float f=atof(argv[1]);
    int i=atoi(argv[2]);
    float result=1;
    for(i; i>0; i--)
        result*=f;
    
    printf("The %g 's %s power is %g\n", f, argv[2], result);
    return 0;
}