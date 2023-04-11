#include<stdio.h>
int main()
{
	int size, a[10],b[10],i,j;
	printf("enter size of array\n");
	scanf("%d", &size);
	printf("enter the elements in the first array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < size; j++)
	{
		b[j] = a[j];
	}
	printf("\n first array elements are\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n second array elements are\n \n");
	for (j = 0; j < size; j++)
	{
		printf("%d\t", b[j]);
	}
	return 0;
}