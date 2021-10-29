#include<stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
int main()
{
    float range,oil;
    printf("Please input the range your traveled(in mile): ");
    scanf("%f",&range);
    printf("Please input the oil your spend(in gallon): ");
    scanf("%f",&oil);

    // 英里/加仑
    printf("In USA, your oil wear is %.1f M/G.\n",range/oil);
    // 升/100千米
    printf("In Europe, your oil wear is %.1f L/100KM.",(oil*GALLON_TO_LITRE)/(range*MILE_TO_KM*100)); 

    return 0;
}