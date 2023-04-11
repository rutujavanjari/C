#include<stdio.h>
int main()
{
	int a[200];
	int num, i, j, k, del;
	printf("enter the size of array  lesser than 200\n");
	scanf("%d", &num);
	printf("enter the array element \n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the position of element to delete\n");
	scanf("%d", &del);
	printf("\n");
	for (j = (del - 1); j < (num - 1); j++)
	{
		a[j] = a[j + 1];
	}
	num--;
	for (k = 0; k < num; k++)
	{
		printf("%d\n",a[k]);
	}
	return 0;
}