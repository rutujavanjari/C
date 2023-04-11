#include<stdio.h>
int main()
{
	int a[10], i, j, size, sum=0;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements in array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < size; j++)
	{
		sum = sum + a[j];
	}
	printf("sum of array is %d\n", sum);
	return 0;
}