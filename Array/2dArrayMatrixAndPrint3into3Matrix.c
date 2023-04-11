#include<stdio.h>
int main()
{
	int a[10][10], size1,size2, i, j,size;
	printf("enter the size of first of 2d array\n");
	scanf("%d", &size1);
	printf("enter the size of second of 2d array\n");
	scanf("%d", &size2);
	size = size1 * size2;
	printf("enter the elements in array\n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("the matrix is \n");
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}