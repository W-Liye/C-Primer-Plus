#include<stdio.h>
void chline(char ch, int i, int j);
int main()
{
    int row, column;
    char ch;

    printf("Enter the print charter: ");
    scanf("%c",&ch);
    printf("Enter rows and columns: ");
    scanf("%d %d",&row, &column);
    chline(ch, column, row);

    return 0;
}

void chline(char ch, int i, int j)
{
    int a,b;
    for(a=0; a<j; a++)
    {
        for(b=0; b<i; b++)
            printf("%c",ch);
        printf("\n");
    }
}