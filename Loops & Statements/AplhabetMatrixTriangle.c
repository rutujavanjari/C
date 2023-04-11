#include<stdio.h>
int main()
{
	int num,i=0,j=0,k=0,l=0;
	int count=0,count2=0,sum;
	printf("enter the number till you want alphabet piryamid\n");
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
				count=65;
			}
			printf("%c",count);
			count=count+1;
		}
		for(l=1;l<=(i-1);l++)
		{
			if(l==1)
			{
				count2=64;
			}
			sum=count2+(i-1);
			printf("%c",sum);
			count2=count2-1;
		}
	printf("\n");
	}
return 0;
}
