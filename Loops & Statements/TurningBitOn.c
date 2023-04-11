#include<stdio.h>
int main()
{	
	int i=1,sum,num,bit;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the number of bit which you want to turn on\n");
	scanf("%d",&bit);
	i=i<<(bit-1);
	sum=num|i;
	printf("after turning on the bit the number is %d\n",sum);
return 0;
}
	