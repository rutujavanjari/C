#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the three numbers to check who is greater\n");
	scanf("%d %d %d",&num1,&num2,&num3);	
	if(num1>num2 && num1>num3)
	{
		printf(" %d is greatest among %d and %d\n",num1,num2,num3);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is greatest among %d and %d\n",num2,num3,num1);
	}
	else
	{
		printf("%d is greatest among %d and %d\n",num3,num2,num1);
	}
return 0;
}