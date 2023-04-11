#include<stdio.h>
int main()
{
	int i, j, a[10][10], row, column;
	printf("enter the number of row in matrix\n");
	scanf("%d", &row);
	printf("enter the number of column in matrix\n");
	scanf("%d", &column);
	printf("enter the elements in matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < (row - 1); i++)
	{
		for (j = 0; j <(i+1); j++)
		{
			a[i + 1][j] = 0;
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
}