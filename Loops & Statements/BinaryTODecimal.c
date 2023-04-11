#include<stdio.h>
int main()
{
	int num,count=1,sum=1,rem=0,add=0;
	printf("enter the  binary number to convert binary to decimal\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		if(count==1)
		{
			sum=1;
		}
		else
		{
		sum=sum*2;
		}
		
		if(rem!=0)
		{
			add=add+sum;
		}
		num=num/10;
		count=count+1;
	}
	printf("the coversion is %d\n",add);
return 0;
}
			