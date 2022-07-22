#include<stdio.h>
#define DUNBAR 150
int main()
{
	int rab=5;
	int week=0;
	while(rab<DUNBAR)
	{
		rab-=++week;
		rab*=2;
		printf("%d weeks later,Rab has %d friends.\n",week,rab);
	}
	return 0;
}