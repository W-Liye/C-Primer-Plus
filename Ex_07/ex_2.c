#include<stdio.h>
int main()
{
	char ch;
	int count=0;
	printf("Please enter chars: ");
	while( (ch=getchar())!='#' )
	{
		if( count++%8==0 )
			printf("\n");
			
		if( ch=='\n' )
			printf("'\\n'-%d. ",ch);
		else if( ch=='\t' )
			printf("'\\t'-%d. ",ch);
		else
			printf("'%c'-%d. ",ch,ch);
	
	}
	return 0;
}