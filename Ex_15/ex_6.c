#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<stdbool.h>

struct font{
    unsigned int id : 8;
    unsigned int size : 7;
    unsigned int align : 2;
    bool bold : 1;
    bool italic: 1;
    bool underline: 1;
}font_mode = {1, 12, 1, 0, 0, 0};

//设定字段与字符串的对应关系，菜单显示与输出用
const char align[][8] = {"left", "center", "right"};
const char on_off[][4] = {"off", "on"};

void show_menu(void);
void change_font(void);
void change_size(void);
void change_align(void);
void change_others(char ch);

int main(void)
{
    char selected;
    show_menu();
    scanf("%c", &selected);
    while(selected != 'q')
    {
        while (getchar() != '\n') continue;  //重中之重！！！！！
        switch(selected)
        {
            case 'f': 
                change_font();
                break;
            case 's':
                change_size();
                break;
            case 'a':
                change_align();
                break;
            default:
                change_others(selected);
                break;
        }
        show_menu();
        scanf("%c", &selected);
    }
    printf("Bye.\n");
}

void show_menu(void)
{
    printf("ID      SIZE    ALIGN   B       I       U\n");
    printf("%-8d%-8d%-8s%-8s%-8s%-8s\n", font_mode.id, font_mode.size, align[font_mode.align], on_off[font_mode.bold], on_off[font_mode.italic], on_off[font_mode.underline]);
    printf("f)change font    s)change size    a)change alignment\n");
    printf("b)toggle bold    i)toggle italic  u)toggle underline\n");
    printf("q)quit\n");
}

void change_font(void)
{
    unsigned int n;
    printf("Enter font id (0-255): ");
    scanf("%d", &n);
    while(getchar() != '\n')
        continue;
    font_mode.id = n;
}

void change_size(void)
{
    unsigned int n;
    printf("Enter font size (0-127): ");
    scanf("%d", &n);
    while(getchar() != '\n')
        continue;
    font_mode.size = n;
}

void change_align(void)
{
    char ch;
    puts("Select alignment:");
    puts("l)left    c)center    r)right");
    //scanf("%c", &ch);
    ch = getchar();
    while(getchar() != '\n')
        continue;
    if(ch == 'l')
        font_mode.align = 0;
    if(ch == 'c')
        font_mode.align = 1;
    if(ch == 'r')
        font_mode.align = 2;
    //printf("%d\n", font_mode.align);
}

void change_others(char ch)
{
    if(ch == 'b')
        font_mode.bold = !font_mode.bold;
    else if(ch == 'i')
        font_mode.italic = !font_mode.italic;
    else if(ch == 'u')
        font_mode.underline = !font_mode.underline;
}