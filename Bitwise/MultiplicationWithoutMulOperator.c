#include<stdio.h>
void main()
{
	int num,mul,result;
	printf("enter number");
	scanf("%d",&num);
	printf("enter the number till how many times you want multiplication");
	scanf("%d",&mul);
	result=num<<mul;
	printf("result is %d",result);
	return ;
}

