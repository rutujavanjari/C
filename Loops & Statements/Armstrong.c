#include<stdio.h>
int main()
{
	int count=0,num=0,num1=0,count2=0,count3=0,sum=1,add=0,remainder=0,i=0;
	printf(" enter the number whom you want armstrong of\n");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		num=num/10;
		count=count+1;
	}
	count2=count;
	for(i=1;i<=count;i++)
	{
		remainder=num1%10;
		count3=count2;
		count2=0;
			while(count3!=0)
			{	
				sum=remainder*sum;
				count3=count3-1;
				count2=count2+1;
			}
		count3=count2;
		add=add+sum;
		sum=1;
		num1=num1/10;
	}
	printf("the armstrong is %d \n",add);	
return 0;
}