#include<stdio.h>
int main()
{
	int num;
	int odd=0,even=0;
	int sum1=0.0;
	int sum2=0.0;
	printf("Please enter integers: ");
	scanf("%d",&num);
	while( num!=0 )
	{
		if( num%2!=0 ){
			odd++;
			sum1+=num;
		}else{
			even++;
			sum2+=num;
		}	
		scanf("%d",&num);	
	}
	printf("There are %d odd numbers,the average is %f.\n",odd,sum1*1.0/odd);
	printf("There are %d even numbers,the average is %f.\n",even,sum2*1.0/even);
	return 0;
}
