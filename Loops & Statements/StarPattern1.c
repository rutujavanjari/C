#include<stdio.h>
int main()
{	
	int num,i,j;
	printf("enter the number of lines till want to print the pattern\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}