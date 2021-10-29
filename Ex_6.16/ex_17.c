#include<stdio.h>
int main()
{
	int year=0;
	float chu=100.0;
	do{
		chu+=chu*0.08;
		chu-=10;
		year++;
	}while(chu>=0);
	printf("%d years later.",year);
	return 0;
}