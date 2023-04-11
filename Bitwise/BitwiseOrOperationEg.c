#include<stdio.h>
void main()
{
	int val,key,result;
	printf("enter the value");
	scanf("%d",&val);
	printf("enter the key");
	scanf("%d",&key);
	result=val|key;
	printf("after setting the bits,result is %d",result);
	return ;
}
