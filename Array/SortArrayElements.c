#include<stdio.h>
int main()
{
	int a[10], size, i, j, k,min=0,l;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements in array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < size; j++)
	{
		for (k =0; k < size; k++)
		{
			if (a[k] > a[k + 1])
			{
				min = a[k];
				a[k] = a[k + 1];
				a[k + 1] = min;
			}
		}
	}
	printf("the assending order of array is\n");
	for (l = 0; l < size; l++)
	{
		printf(" %d\n", a[l]);
	}
	return 0;
}