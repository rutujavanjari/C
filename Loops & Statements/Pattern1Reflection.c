#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter the number of lines to print the mirror image\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		for(j=1;j<=(num-i);j++)
		{
			printf("*");
		}
	printf("\n");
	}
return 0;
}