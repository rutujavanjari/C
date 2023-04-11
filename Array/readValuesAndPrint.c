#include<stdio.h>
int main()
{
	int a[10];
	int num=0, i=0;
	printf("enter the number of elements in srray\n");
	scanf("%d", &num);
	printf("enter elements in array\n");
	for (i = 0; i <(num-1); i++)
	{
		scanf("%d\n",&a[i]);
	
	}
	printf("elements in array are\n");
	for (i = 0; i <(num-1); i++)
	{
		printf("%d\n", a[i]);
	}
	printf("reverse of array is\n");
	for (i =(num-1); i > 0; i--)
	{
		printf("%d\n", a[i]);
	}
	return(0);
}