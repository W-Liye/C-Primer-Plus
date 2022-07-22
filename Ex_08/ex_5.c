#include<stdio.h>
int main()
{
   
    int head=1;    //查找区域的起始
    int tail=100;  //查找区域的终止
    int guess=(head+tail)/2;  //查找区域的中值
    char ch;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with\n");
    printf("a b if it is too big and with\n");
    printf("a s if it is too small.");
    printf("Uh...is your number %d?\n",guess);
    while( (ch=getchar())!='y' )  //没有输入验证！！！
    {
        if( ch=='b' )
        {
            tail=guess-1;
            guess=(head+tail)/2;
            printf("Well, then, is it %d?\n",guess);
        }    
        if( ch=='s' )
        {
            head=guess+1;
            guess=(head+tail)/2;
            printf("Well, then, is it %d?\n",guess);
        }    
        
    }
    printf("I knew I could do it.");
    return 0;

}