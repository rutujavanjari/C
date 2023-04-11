#include<stdio.h>
int main()
{
	int size, i, j, a[10],max=0,second_max=0;
	printf("enter the size of array\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);

	}
	//max = a[0];
	for (j = 0; j < size; j++)
	{
		if (max < a[j])
		{
			max = a[j];
		}

	}
	//second_max = a[0];
	for (i = 0; i < size; i++)
	{
		if (a[i] != max)
		{
			if(second_max<a[i])
				
				second_max = a[i];
		}
		
	}
	printf("maximum number is %d\n", max);
	printf("the second maximum number is %d\n", second_max);

	return 0;
}