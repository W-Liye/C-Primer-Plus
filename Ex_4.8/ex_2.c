#include<stdio.h>
int main()
{
    char name[40];
    int width;
    //char lastname[20];
    printf("Please enter your name: ");
    scanf("%s",name);   //连续输入名和姓
    printf("\"%s\"\n",name);   //a
    printf("\"%20s\"\n",name); //b
    printf("\"%-20s\"\n",name);//c
    width=strlen(name)+3;
    printf("%*s",width,name);  //d 

    return 0;
}