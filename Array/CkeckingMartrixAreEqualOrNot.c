#include<stdio.h>
int main()
{
	int i, j, row1, column1,row2,column2,sum=0,count=0,a[10][10],b[10][10];
	printf("enter the number of row of first matrix\n");
	scanf("%d", &row1);
	printf("enter the number of column of first matrix\n");
	scanf("%d", &column1);
	printf("enter the number of row of second matrix\n");
	scanf("%d", &row2);
	printf("enter the number of column of second matrix\n");
	scanf("%d", &column2);
	printf("enter the numbers of first matrix\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			scanf("%d", &a[i][j]);

		}
	}
	printf("enter the numbers of second matrix\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < column2; j++)
		{
			scanf("%d", &b[i][j]);

		}
	}
	printf("first matrix\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			printf("%d", a[i][j]);

		}
		printf("\n");
	}

	printf("second matrix\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < column2; j++)
		{
			printf("%d",b[i][j]);

		}
		printf("\n");
	}

	sum = row1*column1;
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			if (a[i][j] == b[i][j])
				count = count + 1;
		}
	}
	if (count == sum)
		printf("two matrix are equal\n");
	else
		printf("two matrix are not equal\n");

	return 0;

}