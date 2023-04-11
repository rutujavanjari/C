#include<stdio.h>
void main()
{
	int key,val,result;
	printf("enter the value");
	scanf("%d",&val);
	printf("enter the key");
	scanf("%d",&key);
	result=val^key;
	printf("the result is %d",result);
	return ;
}
