#include<stdio.h>
#include<string.h>
int days(char *name);
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
    printf("Enter a capitalize month name: ");
    scanf("%s", name);
    while(strlen(name) > 2)
    {
        printf("The total to %s is %d.\n", name, days(name));
        printf("Enter a capitalize month name: ");
        scanf("%s", name);
    }

    return 0;
}

int days(char *name)
{
    int i, total=0;
    for(i=0; i<12; i++)
    {
        total += month[i].days;
        if(strcmp(name, month[i].month) == 0)
            return total;
    }
    return -1;
}