#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include<stdbool.h>

#define ID_MASK     0XFF
#define SIZE_MASK   0X7F00
#define ALIGN_MASK  0X18000
#define BOLD_MASK   0X20000
#define ITALIC_MASK 0X40000
#define UNDER_MASK  0X80000

unsigned int font_mode = 0;

const char alignment[][8] = {"left", "center", "right"};
const char on_off[][4] = {"off", "on"};
/* 设定字段与字符串的对应关系，菜单显示与输出用 */

void show_menu(void);
void change_font(void);
void change_size(void);
void change_align(void);
void change_others(char ch);

int main(int argc, char *argv[])
{
    char selected;
    show_menu();
    scanf("%c",&selected);
    while(selected != 'q')
    {
        while (getchar() != '\n') continue;
        switch (selected)
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
        scanf("%c",&selected);
    }

}
void show_menu(void)
{
    int id = font_mode & ID_MASK;
    int size = (font_mode & SIZE_MASK) >> 8;
    int align = (font_mode & ALIGN_MASK) >> 15;
    int bold = (font_mode & BOLD_MASK) >> 17;
    int italic = (font_mode & ITALIC_MASK) >> 18;
    int under = (font_mode & UNDER_MASK) >> 19;

    printf("ID      SIZE    ALIGN   B       I       U\n");
    printf("%-8d%-8d%-8s%-8s%-8s%-8s\n", id, size, alignment[align], on_off[bold], on_off[italic], on_off[under]);
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
    font_mode &= ~ID_MASK;  //关闭特定的位
    font_mode |= n;  
}

void change_size(void)
{
    unsigned int n;
    printf("Enter font size (0-127): ");
    scanf("%d", &n);
    while(getchar() != '\n')
        continue;
    font_mode &= ~SIZE_MASK;
    font_mode |= (n << 8);
}

void change_align(void)
{
    char ch;
    puts("Select alignment:");
    puts("l)left    c)center    r)right");
    scanf("%c", &ch);
    while(getchar() != '\n')
        continue;
    font_mode &= ~ALIGN_MASK;
    if(ch == 'l')
        font_mode |= 0;
    else if(ch == 'c')
        font_mode |= (1 << 15);
    else
        font_mode |= (2 << 15);
}

void change_others(char ch)
{
    if(ch == 'b'){
        int temp = (font_mode & BOLD_MASK);  //temp取出特定的位
        font_mode &= ~BOLD_MASK;
        font_mode |= (temp ^ BOLD_MASK);  //用按位异或运算符切换位
    }else if(ch == 'i'){
        int temp = (font_mode & ITALIC_MASK);
        font_mode &= ~ITALIC_MASK;
        font_mode |= (temp ^ ITALIC_MASK);
    }else{
        int temp = (font_mode & UNDER_MASK);
        font_mode &= ~UNDER_MASK;
        //printf("%d\n", temp);
        font_mode |= (temp ^ UNDER_MASK);
    }
}