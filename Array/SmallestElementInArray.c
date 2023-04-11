#include<stdio.h>
int main()
{
	int a[20], size, i, j,smallest;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements in array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	smallest = a[0];
	for (i = 1; i < size; i++)
	{
		if (smallest > a[i])
			smallest = a[i];
	}
	printf("the smallest element is %d", smallest);

}