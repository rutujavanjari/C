#include<stdio.h>
void main()
{
	int a=1,b;
	b=sizeof(++a);
	printf("resultant value of a and b are\n");
	printf("%d %d",a,b);
	return ;
}
