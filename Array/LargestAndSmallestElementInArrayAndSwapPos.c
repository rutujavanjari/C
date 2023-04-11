#include<stdio.h>
int main()
{
	int size, i, j, a[20],max=0,min=0,min_index=0,max_index=0,swap=0;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the elements in array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 1; i < size; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			max_index = i;
		}
		 
		if (min > a[i])
		{
			min = a[i];
			min_index = i;
		}
		
	}

	swap = a[max_index];
	a[max_index] = a[min_index];
	a[min_index] = swap;
	
printf("the array is \n");
for (i = 0; i < size; i++)
{

	printf("  %d \t \n", a[i]);
}
printf("maximum number is %d\n",max);
printf("minimum number is %d\n",min);
	return 0;

}