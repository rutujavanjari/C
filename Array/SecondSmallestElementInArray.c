#include<stdio.h>
int main()
{
	int a[20], size, i, j,smallest,second_smallest;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the eleemnts in array\n");
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
	second_smallest = a[0];
	for (i = 1; i < size; i++)
	{
		if (a[i] != smallest)
			if (second_smallest > a[i])
				second_smallest = a[i];
	}
	printf("smallest eleemnt is %d\n", smallest);
	printf("second smallest is %d\n", second_smallest);

	return 0;
}