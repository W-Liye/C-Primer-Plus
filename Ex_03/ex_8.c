#include<stdio.h>
int main()
{
    float cup;
    printf("Please enter the number of cups: ");
    scanf("%f",&cup);
    printf("Volume is %.1f quarts,\nand is %.1f ounces,\nand is %.1f tablespoons,\nand is %.1f teaspoons.",cup/2,cup*8,cup*16,cup*48);

    return 0;
}