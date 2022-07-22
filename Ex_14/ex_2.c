#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int day_s(char *name, int days);
struct months{
    char month[20];
    char mon[5];
    int days;
    int n;
};
struct months month[12] =
{
    {"January", "Jan", 31, 1},
    {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}   
};

int main(void)
{
    char name[20];
    int days;
    printf("Enter the month: ");
    scanf("%s", name);
    printf("Enter the date: ");
    scanf("%d", &days);
    while(name[0] != 'q')
    {
        printf("The total to %s is %d.\n", name, day_s(name, days));
        printf("Enter the month: ");
        scanf("%s", name);
        printf("Enter the date: ");
        scanf("%d", &days);
    }

    return 0;
}

int day_s(char *name, int days)
{
    int i, total=0;
    if(isdigit(*name))
    {
        for(i=0; i<atoi(name)-1; i++)
            total += month[i].days;
        if(days > month[i].days)
            return -1;
        return total+days;
    }
    else 
    {
       for(i=0; i<12; i++)
        {
            if(strlen(name) == 3 && strcmp(name, month[i].mon) == 0 && days <= month[i].days)
                return total+days;
            if(strlen(name) > 3 && strcmp(name, month[i].month) == 0 && days <= month[i].days)
                return total+days;
            total += month[i].days;
        } 
    }
    
    return -1;
}