#include<stdio.h>
int main()
{
	int i, j, a[10][10], row, column, count = 0;
	printf("enter the number of row in matrix\n");
	scanf("%d", &row);
	printf("entwr the number of column in matrix\n");
	scanf("%d", &column);
	printf("enter elements in matrix\n");
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

	for (i = 0; i < row; i++)
	{
		if (a[i][i] == 1)
			count = count + 1;
	}
	if (row == count)
		printf("the matrix is diagonal matrix\n");
	else
		printf("the matrix is not a diagonal matrix\n");


	return 0;
}