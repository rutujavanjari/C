#include<stdio.h>
int main()
{
int a[20], b[20], i, j,size1,size2,count=0,sum=0,res=0,max=0;
printf("enter the size of first array\n");
scanf("%d", &size1);
printf("enter the size of second array\n");
scanf("%d", &size2);
printf("enter the first array elements\n");
for (i = 0; i < size1; i++)
{
	scanf("%d", &a[i]);
}
printf("enter the second array elements\n");
for (j = 0; j < size2; j++)
{
	scanf("%d", &b[j]);
}
sum = size1 + size2;
for (i = size1; i < sum; i++)
{
	a[i] = b[count];
	count = count + 1;
	
}


for (j = 0; j <sum; j++)
{
	for (i = 1; i <sum; i++)
	{
		if (a[j] < a[i+j])
		{
			max = a[j];
			a[j]= a[i+j];
			a[i + j] = max;
			
		}
		
	}
	
}
printf("mergered array is\n");
for (i = 0; i < sum; i++)
{
	printf("%d\n",a[i]);
}

return 0;
}