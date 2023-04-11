#include<stdio.h>
void main()
{
	int num,pos,x=1,result;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the position ");
	scanf("%d",&pos);
	x=x<<(pos-1);
	result=x^num;
	printf("after toggling particular bit is %d",result);
	return ;
}
