#include<stdio.h>
int main()
{
	int sum=0,remainder,num,num1;
	printf(" enter the number\n");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{	
		remainder=num%10;
		sum=(sum*10)+remainder;
		num=num/10;
	}
	if(num1==sum)
	{
		printf(" %d is palindrome\n",sum);
	}
	else
	{	
		printf(" %d is not a palindrome\n",sum);
	}
return 0;
}
		
		