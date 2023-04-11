#include<stdio.h>
int main()
{	
	int i=1,num,sum,check,bit,shift;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the number of bit to toggle\n");
	scanf("%d",&bit);
	shift=i<<(bit-1);
	check=num&shift;
	if(check!=0)
	{
		shift=~shift;
		sum=num&shift;
		printf("after toggling the bit the number is %d\n",sum);
	}
	else
	{
		sum=num|shift;
		printf("after toggling the bit the number is %d\n",sum);
	}
return 0;
}	
			