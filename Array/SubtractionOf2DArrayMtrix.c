#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], i, j,size1,size2,size;
	printf("enter the size of row first array from 2D array\n");
	scanf("%d", &size1);
	printf("enter the size of column of first array of 2D array\n");
	scanf("%d", &size2);
	printf("enter the elements of first array\n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the elements of second array\n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("the subtration is\n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			a[i][j] = a[i][j] - b[i][j];
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}