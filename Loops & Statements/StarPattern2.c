#include<stdio.h>
int main()
{
	int num,i,j,k;
	printf("enter the number till want print pattern lines\n");
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
		printf("\n");
	}
return 0;
}