#include<stdio.h>
#include "pel2-2a.h"

int set_mode(int mode, int *mode0)
{
    //int mode;
    if(mode==0 || mode==1)
        *mode0=mode;
    else if(*mode0==0)
        printf("Invalid mode specified. Mode 0(metric) used.\n");
    else if(*mode0==1)
        printf("Invalid mode specified. Mode 1(US) used.\n");

    return *mode0;
}

void get_info(int mode)
{
    int distance;
    float fuel;
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
    show_info(mode, distance, fuel);
}

void show_info(int mode, int distance, float fuel)
{
    if(mode==0){
        printf("Fuel consumption is %.2f liters per 100 km.\n", fuel*100.0/distance);
    }else{
        printf("Fuel consumption is %.1f miles per gallon.\n", distance/fuel);
    }
}