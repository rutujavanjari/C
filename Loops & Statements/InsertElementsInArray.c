#include<stdio.h>
int main()
{
	int a[100],num,i,j;
	printf("enter the number of elements in array\n");
	scanf("%d",&num);
	printf("enter the elements in array\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array elements are\n");
	for(j=0;j<num;j++)
	{
		printf("%d\n",a[j]);
	}
return 0;
}