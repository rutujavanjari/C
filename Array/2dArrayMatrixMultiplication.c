#include<stdio.h>
int main()
{
	int a[10][10], b[10][10], i, j,row1=0,row2=0,column1=0,column2=0,c[10][10],k,sum=0;
	printf("enter the size of row of first array\n");
	scanf("%d", &row1);
	printf("enter the size of column of first array\n");
	scanf("%d", &column1);
	printf("enter the size of row of two array\n");
	scanf("%d", &row2);
	printf("enter the size of column of two array\n");
	scanf("%d", &column2);
	
	printf("enter first array elements\n");
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			scanf("%d", &a[i][j]);
		}
		
	}
	printf("enter second array elements\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < column2; j++)
		{
			scanf("%d", &b[i][j]);
			
		}
		
	}
	for (i = 0; i <row1; i++)
	{
		for (j = 0; j <column2; j++)
		{
			for (k = 0; k < row2; k++)
			{
				sum = sum + (a[i][k] * b[k][j]);
			}
			c[i][j] = sum;
			sum = 0;
		}
	}
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < column1; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}


	return 0;
}