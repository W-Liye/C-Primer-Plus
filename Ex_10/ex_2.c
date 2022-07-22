//数组内容拷贝 （三份） 
#include<stdio.h>
void copy_arr(double ar1[], double ar2[], int n);  //数组表示法 
void copy_ptr(double * ar1, double * ar2, int n);  //指针表示法 
void copy_ptrs(double * ar1, double * ar2, double * p);  //指针、最后元素的指针 
int main()
{
	int i;
	double source[5]={1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source+5);
    
    for(i=0; i<5; i++)
     	printf("%g  ",target1[i]);
    printf("\n");
    for(i=0; i<5; i++)
     	printf("%g  ",target2[i]);
    printf("\n");  	
    for(i=0; i<5; i++)
     	printf("%g  ",target3[i]);
		 	
    return 0;
}

void copy_arr(double ar1[], double ar2[], int n)
{
	int i;
	for(i=0; i<n; i++)
		ar1[i]=ar2[i];
}

void copy_ptr(double * ar1, double * ar2, int n)
{
	int i;
	for(i=0; i<n; i++)
		*(ar1++)=*(ar2++);
}

void copy_ptrs(double * ar1, double * ar2, double * p)
{
	do{
		*(ar1++)=*(ar2++);
	}while(ar2!=p);
	//printf("%g \n",*(p+4));		
}
