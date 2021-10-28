// #include<stdio.h>
// void br(void);
// void ic(void);
// int main()
// {
//     br();
//     printf(", ");
//     ic();
//     printf("\n");
//     ic();
//     printf(",\n");
//     br();

//     return 0;
// }

// void br(void)
// {
//     printf("Brazil, Russia");
// }

// void ic(void)
// {
//     printf("India, China");
// }

#include<stdio.h>
void br(void);
void ic(void);
int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");
    
    return 0;
}

void br(void)
{
    printf("Brazil,Russia");
}
void ic(void)
{
    printf("India,China");
}