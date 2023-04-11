#include<stdio.h>
void main()
{
	int val,key,result1,result2;
	printf("enter the value");
	scanf("%d",&val);
	printf("enter the key");
	scanf("%d",&key);
	result1=~key;
	result2=val&result1;
	printf("the result is %d",result2);
	return ;
}
