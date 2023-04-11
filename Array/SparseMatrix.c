#include<stdio.h>
int main()
{
	int a[10][10], i, j, row, column,sum=0,count=0;
	printf("enter the number of row\n");
	scanf("%d", &row);
	printf("enter the number of column\n");
	scanf("%d", &column);
	sum = (row * column) / 2;
	sum++;
	printf("enter the elements in matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j]==0)
				count = count + 1;
		}
	}
	printf("the matrix is \n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	if (sum <= count)
		printf("it is a sparse matrix\n");
	else
		printf("it is not a sparse matrix\n");

	return 0;
}