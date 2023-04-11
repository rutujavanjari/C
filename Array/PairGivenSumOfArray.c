#include<stdio.h>
int main()
{
	int sum, a[10], i, j, size, add, count = 0, num1, num2;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the sum you want to check\n");
	scanf("%d", &sum);
	printf("enter the eleemnts in aray\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i <(size-1);i++)
	{
		for (j = 0; j < (i - size - 1); j++)
		{
			add = a[i] + a[i + j + 1];
			if (add == sum)
			{
				num1 = a[i];
				num2 = a[i + j + 1];
				count = 1;
			}
			add = 0;
		}
	}
	printf("the array is\n");
	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
	if (count == 1)
	{
		printf("the numbers are %d and %d\n", num1, num2);
	}
	else
	{
		printf("sum does not matches to array\n");
	}

	return 0;
}




