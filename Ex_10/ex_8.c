//一维数组截取拷贝
#include<stdio.h>
void copy_ptr(double * ar1, double * ar2, int n); 
int main()
{
    int i;
    double arr[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target2[3];
    copy_ptr(target2, arr+2, 3);

    for(i=0; i<3; i++)
    {
        printf("%g  ", target2[i]);
    }

    return 0;
}

void copy_ptr(double * ar1, double * ar2, int n)
{
    int i;
    for(i=0; i<n; i++)
        *(ar1++)=*(ar2++);
}