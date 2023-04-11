#include<stdio.h>
int main()
{
	int size, a[10],pos=0,i,j,k,l,m,count=0;
	printf("enter the size of array\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < size; j++)
	{
		for(k=0;k<size;k++)
		{	
			
			if(a[j]==a[k+j+1])
			{
				pos = a[k+j+1];
				count = count + 1;
			}
			 if(pos != 0)
			{
				for (l = (pos - 1); l <(size - 1); l++)
				{
					a[l] = a[l + 1];
				}
				size--;
				pos = 0;
			}
		}
	}
	printf("count is %d\n", count);
	printf("after checking the duplicate values the array is\n");
	for (m = 0; m <size; m++)
	{
		printf("%d\n", a[m]);
	}
}