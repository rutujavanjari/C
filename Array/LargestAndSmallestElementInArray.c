#include<stdio.h>
int main()
{
	int a[200], size, i, j, max, min ;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements in array\n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < size; j++)
	{
		if (a[j] > a[j + 1])
		{
			max = a[j + 1];
			a[j + 1] = a[j];
			a[j] = max;
		}
	}
	printf(" largest element %d\n first element of a[%d] \n ", a[size - 1], a[0]);
	for (int k = 0; k < size; k++)
	{
		if (a[k] < a[k + 1])
		{
			min = a[k];
			a[k] = a[k+1];
			a[k+1] = min;
			printf("min  %d\n", a[k+1]);
		}
	}
	printf("smallest element is  %d\n smallest element of array = %d \n", a[size - 1], min);
	return 0;
}


