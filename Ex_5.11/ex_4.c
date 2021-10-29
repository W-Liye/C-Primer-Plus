#include<stdio.h>
#define CM_POR_FEET 30.48
#define CM_POR_INCH 2.54
int main()
{
    float height,inches;
    int feets;
    printf("Enter a height in centimeters: ");
    scanf("%f",&height);
    while( height>0 )
    {
        feets=height/CM_POR_FEET;
        inches=(height-feets*CM_POR_FEET)/CM_POR_INCH;

        //printf("%d\n",33.44);     *转换不匹配*
        //printf("%.1f cm = %d feet, %.1f inches\n",height,height/CM_POR_FEET,(height-feets*CM_POR_FEET)/CM_POR_INCH);
        printf("%.1f cm = %d feet, %.1f inches\n",height,feets,inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f",&height);
    }
    printf("bye");
    return 0;
}