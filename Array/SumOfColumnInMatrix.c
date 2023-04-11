#include<stdio.h>
int main()
{
	int i, j, a[10][10], row, column, sum=0;
	printf("enter the number of row in matrix\n");
	scanf("%d", &row);
	printf("enter the number of column in matrix\n");
	scanf("%d", &column);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("the matrix is\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < row; j++)
		{
			sum = sum + a[j][i];
		}
		printf("column %d sum is %d\n", i + 1, sum);
		sum = 0;
	}
	return 0;
}