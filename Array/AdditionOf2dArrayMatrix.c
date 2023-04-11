#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], size1, size2, i, j,size;
	printf("enter size of first array of 2D array\n");
	scanf("%d", &size1);
	printf("enter the size of second array of 2D matrix\n");
	scanf("%d", &size2);
	size = size1 * size2;
	printf("enter the elements of first matrix\n");
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
	printf("addition of 2D array matrix is\n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			a[i][j] = a[i][j] + b[i][j];
			printf("%d  ", a[i][j]);
			
		}
		printf("\n");
	}
	return 0;

}