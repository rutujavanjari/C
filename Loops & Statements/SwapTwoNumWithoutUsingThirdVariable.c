#include<stdio.h>
int main()
{
	int num1=0,num2=0;                    
	printf("enter two numbers to swap\n");
	scanf("%d%d",&num1,&num2);
	num2=num1+num2;
	num1=num2-num1;
	num2=num1-num2;

	printf("after swapping the numbers the numbers are %d and %d\n",num1,num2);
return 0;
}
	