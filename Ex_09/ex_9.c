//递归实现整数幂
#include<stdio.h>
double power(double n, int p);
int main()
{
	double x, xpow;
	int exp;
	
	printf("Enter a number and the positive integer power to which\n");
	printf("the number be raised. Enter to quit.\n");
	while( scanf("%lf%d", &x, &exp)==2 )
	{
		xpow=power(x, exp);
			
		printf("%.3g to the power %d is %.5g\n",x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("bye!");
	return 0;
}

double power(double n, int p)
{
	double pow;
	int i;
	
	if(n==0 && p!=0)
		return 0;
		
	if(p>0)
	{
		pow=n*power(n, p-1);
		return pow;
	}else if(p<0){
		pow=1.0/n*power(n, p+1);	
		return pow;
	}else{
		
		if(n==0)
			printf("0的0次幂未定义,返回1.\n");	
		return 1;	
	}	
}

