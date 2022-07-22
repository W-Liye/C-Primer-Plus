//manybook.c--包含多本书的图书目录（多种输出）
#include<stdio.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
char * s_gets(char * st, int n);
void list_book(struct book library[], int count);
void list_book_title(struct book library[], int count);
void list_book_value(struct book library[], int count);

int main(void)
{
    struct book library[MAXBKS];  //book类型的结构数组
    int count = 0;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while(count<MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
        && library[count].title[0] != '\0')
    {
        printf("Now enter the arthor.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if(count > 0){
        list_book(library, count);
        list_book_title(library, count);
        list_book_value(library, count);
    }else
        printf("No book? Too bad.\n");

    return 0;
}

void list_book(struct book library[], int count)
{
    int index;
    printf("Here is the list of your books:\n");
    for(index=0; index<count; index++)
    {
        printf("%s by %s: $%.2f\n", library[index].title,
            library[index].author, library[index].value);
    }
}

void list_book_title(struct book library[], int count)  //冒泡排序
{
    int i,j;
    char * ptitle[count];  
    char * temp;

    for(i=0; i<count; i++)
        ptitle[i] = library[i].title;  //为了不改变输入顺序，新建指针数组进行排序
    for(i=0; i<count-1; i++)  //比较次数
        for(j=0; j<count-1-i; j++)  //比较过程
            if(strcmp(ptitle[j], ptitle[j+1]) > 0)
            {
                temp = ptitle[j];
                ptitle[j] = ptitle[j+1];
                ptitle[j+1] = temp;
            }

    printf("Here is the list of your books by title:\n");
    for(i=0; i<count; i++)
        for(j=0; j<count; j++)
            if(ptitle[i] == library[j].title)
                printf("%s by %s: $%.2f\n", library[j].title, 
                    library[j].author, library[j].value);
}

void list_book_value(struct book library[], int count)  //选择排序
{
    int i,j;
    float * pvalue[count];
    float * temp;

    for(i=0; i<count; i++)
        pvalue[i] = &library[i].value;
    for(i=0; i<count-1; i++)
        for(j=i+1; j<count; j++)
            if(*pvalue[i] > *pvalue[j])
            {
                temp = pvalue[i];
                pvalue[i] = pvalue[j];
                pvalue[j] = temp;
            }
            
    printf("Here is the list of your books by value:\n");
    for(i=0; i<count; i++)
        for(j=0; j<count; j++)
            if(*pvalue[i] == library[j].value)
                printf("%s by %s: $%.2f\n", library[j].title, 
                    library[j].author, library[j].value);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');  //查找换行符
        if(find)                  //如果地址不是NULL
            *find = '\0';         //在此处放置一个空字符
        else
            while(getchar() != '\n')  //处理输入行中的剩余字符
                continue;
    }
    return ret_val;
}