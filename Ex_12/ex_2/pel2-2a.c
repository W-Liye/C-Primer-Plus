#include<stdio.h>
#include "pel2-2a.h"

void set_mode(int mode0)
{
    if(mode0==0 || mode0==1)
        mode=mode0;
    else if(mode==0)
        printf("Invalid mode specified. Mode 0(metric) used.\n");
    else if(mode==1)
        printf("Invalid mode specified. Mode 1(US) used.\n");
}

void get_info(void)
{
    if(mode==0){
        printf("Enter distance traveled in kilometers: ");
        scanf("%d", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%f", &fuel);
    }else{
        printf("Enter distance traveled in miles: ");
        scanf("%d", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%f", &fuel);
    }
}

void show_info(void)
{
    if(mode==0){
        printf("Fuel consumption is %.2f liters per 100 km.\n", fuel*100.0/distance);
    }else{
        printf("Fuel consumption is %.1f miles per gallon.\n", distance/fuel);
    }
}