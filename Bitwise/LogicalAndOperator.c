#include<stdio.h>
void main()
{
	int i=0,j=1,k=2,l;
	l=i&&j++&&k++;
	printf("resultant values after evaluation is:\n");
	printf("%d %d %d %d",i,j,k,l);
	return ;
}
