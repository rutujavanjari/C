#include<stdio.h>
int main()
{
	int num=0,num1=0,rem1=0,count=0,rem2,sum=0,result=0;
	printf("enter the number t convert decimal to binary\n");
	scanf("%ld",&num);
	num1=num;
	while(rem1!=1)
	{	
		rem1=num1%2;
		if(rem1==0)
		{
			count=count+1;
		}
		num1=num1/2;
	}
	while(num!=0)
	{
		rem2=num%2;
		sum=(sum*10)+rem2;
		num=num/2;
	}
	while(count!=0)
	{
		sum=sum*10;
		count=count-1;
	}
	printf(" the binary is %d\n",sum);
return 0;
}	