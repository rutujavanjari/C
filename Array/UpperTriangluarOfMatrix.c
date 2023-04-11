#include<stdio.h>
int main()
{
	int i, j, a[10][10], row, column;
	printf("enter the number of rows in matrix\n");
	scanf("%d", &row);
	printf("enter the number of column in matrix\n");
	scanf("%d", &column);
	printf("enter the elements in array\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < row-1; i++)
	{
		for (j = 0; j < (row - 1 - i); j++)
		{
			a[i][j + 1 + i] = 0;
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}