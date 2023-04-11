#include<stdio.h>
void main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	num=~num;
	printf("one's complement is %d\n",num);
	num=num+1;
	printf("two's complement is %d\n",num);
	return;
}
