#include<stdio.h>
int main()
{
	int num,i,j,k,l;
	printf("enter the number of lines to draw pattern\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=(num-i);j++)
		{
			printf(" ");
		}	
		for(k=1;k<=i;k++)
		{
			printf("*");
		}	
		for(l=1;l<=(i-1);l++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}	