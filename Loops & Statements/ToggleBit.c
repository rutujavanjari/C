#include<stdio.h>
int main()
{
	int i=1,num,sum,bit;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the bit which you want to toggle\n");
	scanf("%d",&bit);
	i=i<<(bit-1);	
	sum=num^i;
	printf("after toggling the bit the number is %d\n",sum);
return 0;
}