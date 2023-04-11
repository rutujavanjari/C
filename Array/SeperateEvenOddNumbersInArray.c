#include<stdio.h>
int main()
{
	int size, i, j, a[10], e[10], o[10],count1=0,count2=0;
	printf("enter the size of array\n");
	scanf("%d", &size);
	printf("enter the eleements in array\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			e[count1] = a[i];
			count1++;
		}
		else
		{
			o[count2] = a[i];
			count2++;
		}
	}
	printf("\n even numbers in array are\n");
	for (i = 0; i < count1; i++)
	{
		printf("%d\t", e[i]);
	}
	printf("\nodd numbers in array are\n");
	for (j = 0; j < count2; j++)
	{
		printf("%d\t", o[j]);
	}
	return 0;
	
}