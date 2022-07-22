#include<stdio.h>
#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define DISCOUNT 0.05
#define FREIGHT1 6.5
#define FREIGHT2 14.0
//#define FREIGHT3 
int main()
{
    char ch;
    float weight,weight1=0.0,weight2=0.0,weight3=0.0,sum=0.0;
    float costa=0.0,costb=0.0,costc=0.0;
    float discount=0.0,freight=0.0;
    printf("a)洋蓟  b)甜菜  c)胡萝卜  q)退出订购\n");
    do
    {
        printf("请选择商品(q 退出)：");
        scanf("%c",&ch);
        switch(ch)
        {
            case 'a': printf("请输入洋蓟的磅数：");
                      scanf("%f",&weight);
                      weight1+=weight;
                      costa+=weight*ARTICHOKE;
                      break;
            case 'b': printf("请输入甜菜的磅数：");
                      scanf("%f",&weight);
                      weight2+=weight;
                      costb+=weight*BEET;
                      break;
            case 'c': printf("请输入胡萝卜的磅数：");
                      scanf("%f",&weight);
                      weight3+=weight;
                      costc+=weight*CARROT;
                      break;
            case 'q': break;
        }
        //sum+=weight;
    } while ( ch!='q' );

    if( costa+costb+costc>=100 )
        discount=(costa+costb+costc)*DISCOUNT;

    if( weight1+weight2+weight3<=5 )
        freight=6.5;
    else if( weight1+weight2+weight3<=20 )
        freight=15;
    else 
        freight=(weight1+weight2+weight3-20)*0.5+14;
    
    printf("  洋蓟($2.05/pound)：订购重量-%.2f  订购费用-$%.2f\n",weight1,costa);
    printf("  甜菜($1.15/pound): 订购重量-%.2f  订购费用-$%.2f\n",weight2,costb);
    printf("胡萝卜($1.09/pound): 订购重量-%.2f  订购费用-$%.2f\n",weight3,costc);
    printf("订单总费用为：$%g\n",costa+costb+costc);
    printf("折扣为：$%g\n",discount);
    printf("运费和包装费为：$%g\n",freight);
    printf("费用总额为：$%g\n",costa+costb+costc-discount+freight);

    return 0;
    
}