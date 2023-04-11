#include<stdio.h>
int main()
{
	int row, column, i, j,a[10][10],sum=0;
	printf("enter the size of row in matirx\n");
	scanf("%d", &row);
	printf("enter the size of column in matrix\n");
	scanf("%d", &column);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("%d\t", sum);
		sum = 0;
		printf("\n");
	}
	return 0;
}