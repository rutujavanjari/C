#include<stdio.h>
int main()
{
	int i, j, a[10][10], row, column,sum=0;
	printf("enter the number of row\n");
	scanf("%d", &row);
	printf("enter the number of column\n");
	scanf("%d", &column);
	printf("enter elements in matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("after the operation\n");
	for (i = 0; i <(row-1); i++)
	{
		for (j = 0; j < (i + 1);j++)
		{
			sum = a[i + 1][j];
			a[i + 1][j] = a[j][i + 1];
			a[j][i + 1] = sum;
		}
	}
	printf("the traanspose matrix is \n");
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