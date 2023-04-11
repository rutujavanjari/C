#include<stdio.h>
int main()
{
	int num,remainder,sum=0,rem;
	printf("enter the number\n");
	scanf("%d",&num);
	while (num != 0)
	{
		rem = num % 10;
		sum = (sum * 10) + rem;
		num = num / 10;
	}
	while(sum!=0)
	{
		remainder=sum%10;
		
		switch(remainder)
		{
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:		
				printf("Two ");
				break;
			case 3:
				printf("three ");
				break;	
			case 4:
				printf("four ");
				break;
			case 5:	
				printf("five ");	
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;	
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
		}
		sum=sum/10;
	}
return 0;
}
		

				