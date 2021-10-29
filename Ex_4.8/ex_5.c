#include<stdio.h>
int main()
{
    float speed;
    float size;

    printf("Please input the download speed(Mb/s): ");
    scanf("%f",&speed);
    printf("Please input the file size(MB): ");
    scanf("%f",&size);
    printf("At %.2f megabits per seconds, a file of %.2f megabytes\n",speed,size);
    printf("downloads in %.2f seconds.",size*8/speed);

    return 0;
}