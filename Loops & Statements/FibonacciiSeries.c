#include<stdio.h>
int main()
{
	int fibo,i,prev=0,sum,var=1;
	printf("enter the number till where you want the fibonacci series\n");
	scanf("%d",&fibo);
	for(i=2;i<=fibo;i++)
	{	
		if(i==2)
		{
			printf("0 ");
		}
		else
		{	
			sum=var+prev;
			printf("%d ",sum);
			prev=var;
			var=sum;
			if(sum==1)
				printf("%d ",sum);
		}
		
	}
return 0;
}	
		