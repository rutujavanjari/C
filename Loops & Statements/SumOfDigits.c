#include<stdio.h>
int main()
{
	int num,sum=0,remainder;
	printf("enter the number to the sum\n");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		sum=sum+remainder;	
		num=num/10;
	}
	printf("the sum of number is %d\n",sum);
return 0;
}