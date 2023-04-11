#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("\n enter the number to check wether it is prime or not\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0 && count!=1)
		{	
			printf(" %d is not a prime number\n",num);
			count=1;
		}
	}
	if(count==0)
	{
		printf(" %d is a prime number\n",num);
	}
return 0;
}	
		