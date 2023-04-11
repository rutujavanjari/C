#include<stdio.h>
int main()
{
	int sum=1,num,i;
	printf("enter t number of which you want the palindrome\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num==0)
			printf(" 1");
		sum=sum*i;
	}
	printf("the palindrome of %d is %d \n",num,sum);
return 0;
}