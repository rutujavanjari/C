#include<stdio.h>
int main()
{
	int a[20], size, i, j;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements in array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the new element you want to insert\n");
	for (i = size; i <= size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("array after inserting element is\n");
	for (i = 0; i <= size; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
	
}