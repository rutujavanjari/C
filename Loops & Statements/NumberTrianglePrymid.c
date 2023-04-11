#include<stdio.h>
int main()
{
	int i,j,k,l;
	int num,count,count2,sum;
	printf("enter the number of lines to print the pirymid of number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=(num-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(k==1)
			{
				count=1;
			}
			printf("%d",count);
			count=count+1;
		}
		for(l=1;l<=(i-1);l++)
		{
			if(l==1)
			{
				count2=0;
			}
			sum=count2+(i-1);
			printf("%d",sum);
			count2=count2-1;
		}
	printf("\n");
	}
return 0;
}