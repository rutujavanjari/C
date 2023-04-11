#include<stdio.h>
int main()
{
	int a[10], size, i, j, temp;
	printf("enter the size of array");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse of array is:\n");
	for (j = 0; j < size; j++)
	{
		printf("%d\n", a[size - 1 - j]);
	}
	return 0;

}