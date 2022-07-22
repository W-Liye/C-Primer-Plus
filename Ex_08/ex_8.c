#include<stdio.h>
void menu(void);
float get_first(void);
float get_second(void);
int main()
{
    float first,second;
    char ch;
    do{
        menu();
        //scanf("%c",&ch);
        ch=getchar();
        while( getchar()!='\n' )  
            continue;

        switch(ch)
        {
            case 'a':
                first=get_first();
                second=get_second();
                printf("%g + %g = %g\n",first, second, first+second);
                break;
            case 's':
                first=get_first();
                second=get_second();
                printf("%g - %g = %g\n",first, second, first-second);
                break;
            case 'm':
                first=get_first();
                second=get_second();
                printf("%g * %g =%g\n",first, second, first*second);
                break;
            case 'd':
                first=get_first();
                while((second=get_second())==0)
                {
                    printf("Enter a number other than 0.\n");
                }
                printf("%g / %g = %g\n",first, second, first/second);
                break;
            case 'q':
                printf("Bye.\n");
                break;
            default:
                printf("Please try again.\n");
                continue;
        }
        if(ch=='q')
            break;
        while( getchar()!='\n' )
             continue;
    }while( ch!='q' );
    
    return 0;
}

void menu(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add            s. subtract\n");
    printf("m. multiply       d.divide\n");
    printf("q. quit\n");
}

float get_first(void)
{
    float fir;
    char c;
    printf("Enter first number: ");
    while( scanf("%f",&fir)!=1 )
    {
        while((c = getchar())!='\n')
            putchar(c);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }

    return fir;
}

float get_second(void)
{
    float sec;
    char c;
    printf("Enter second number: ");
    while( scanf("%f",&sec)!=1 )
    {
        while((c = getchar())!='\n')
            putchar(c);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }

    return sec;
}