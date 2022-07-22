#include<stdio.h>
int main()
{
	char ch;
	int n_bla=0;
	int n_lin=0;
	int n_oth=0;
	
	printf("Please enter characters: ");
	while( (ch=getchar())!='#' )
	{
		if( ch==' ' )
			n_bla++;
		else if( ch=='\n' )
			n_lin++;
		else
			n_oth++;
	}
	printf("There are %d black, %d line breaks, %d characters.\n",n_bla,n_lin,n_oth);
	return 0;
}