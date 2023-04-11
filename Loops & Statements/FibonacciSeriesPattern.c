#include<stdio.h>
int main()
{
	int num,prev=0,add=1,sum=0,i,j;
	printf("enter the number of lines till you want the pattern\n");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=add+prev;
			printf("%d ",sum);
			prev=add;
			add=sum;
			
		}
		sum=0;
		add=1;
		prev=0;
		printf("\n");
	}
return 0;
}