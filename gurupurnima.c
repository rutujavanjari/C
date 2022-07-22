#include<stdio.h>
int main(void)
{
	int i, j, k,l,m,n;

	// H for happy
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <=1; j++)
		{
				printf("*");
		}
		for (k = 1; k <= 3; k++)
		{	
			if(i!=3)
			printf(" ");
		}
		for (j = 1; j <=1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 3; k++)
		{
			if (i == 3)
				printf("*");
		}
		
		printf("\n");
	}

	printf("\n");
	// A for happy
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <=1; j++)
		{
			printf("*");
		}
		for (m = 1; m <= 3; m++)
		{
			if (i == 1)
				printf("*");
		}
		for (k = 1; k <= 3; k++)
		{
			if (i == 2 || i == 4 || i == 5)
				printf(" ");
		}
		for (l = 1; l <= 1; l++)
		{
			printf("*");
		}
		for (n = 1; n <= 3; n++)
		{
			if(i==3)
			printf("*");
		}
		printf("\n");
	}

	// P of happy

	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (m = 1; m <= 4; m++)
		{
			if (i == 1 || i == 3)
				printf("*");
		}
		for (k = 1; k <=3; k++)
		{
			if (i == 2)
				printf(" ");
		}
		for (l = 1; l <=1; l++)
		{
			if (i == 2)
				printf("*");
		}
		printf("\n");
	}

	// P of happy

	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (m = 1; m <= 4; m++)
		{
			if (i == 1 || i == 3)
				printf("*");
		}
		for (k = 1; k <= 3; k++)
		{
			if (i == 2)
				printf(" ");
		}
		for (l = 1; l <= 1; l++)
		{
			if (i == 2)
				printf("*");
		}
		printf("\n");
	}

	// Y for happy
	
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			if (i == 1 || i == 2 || i == 3)
			{
				printf("*");
				if (i == 3)
					printf("***");
				else
					printf("   ");
				printf("*");
			}
		}
		for (k = 1; k <= 1; k++)
		{
			if (i == 4 || i == 5)
				printf("  *");
		}
		printf("\n");
	}


	// G for guru 

	printf("\n\n\n\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 4; k++)
		{
			if (i == 1 || i == 5)
			{
				printf("*");
			}
		}
		for (l = 1; l <= 1; l++)
		{
			if (i == 3)
			{
				printf("  **");
			}
			else if(i==4)
			{
				printf("   *");
			}
		}

		printf("\n");
	}

	// U for guru

	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 4; k++)
		{
			if(i==5)
			printf("*");
		}
		for (l = 1; l <= 4; l++)
		{
			if (i != 5)
				printf(" ");
		}
		for (m = 1; m <= 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	// R gor guru
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 3; k++)
		{
			if (i == 1 || i == 3)
			{
				printf("*");
			}

		}
		for (l = 1; l <= 1; l++)
		{
			if (i == 2)
			{
				printf("  *");
			}
		}
		for (m = 1; m <= 1; m++)
		{
			if (i == 4)
			{
				printf(" *");
			}
			else if (i == 5)
			{
				printf("  *");
			}
		}

		printf("\n");
	}
	
	// u for guru 
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 4; k++)
		{
			if (i == 5)
				printf("*");
		}
		for (l = 1; l <= 4; l++)
		{
			if (i != 5)
				printf(" ");
		}
		for (m = 1; m <= 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	// P of purnima

	printf("\n\n\n\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (m = 1; m <= 4; m++)
		{
			if (i == 1 || i == 3)
				printf("*");
		}
		for (k = 1; k <= 3; k++)
		{
			if (i == 2)
				printf(" ");
		}
		for (l = 1; l <= 1; l++)
		{
			if (i == 2)
				printf("*");
		}
		printf("\n");
	}

	// u for purnima
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 4; k++)
		{
			if (i == 5)
				printf("*");
		}
		for (l = 1; l <= 4; l++)
		{
			if (i != 5)
				printf(" ");
		}
		for (m = 1; m <= 1; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	// R for pornima
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= 3; k++)
		{
			if (i == 1 || i == 3)
			{
				printf("*");
			}

		}
		for (l = 1; l <= 1; l++)
		{
			if (i == 2)
			{
				printf("  *");
			}
		}
		for (m = 1; m <= 1; m++)
		{
			if (i == 4)
			{
				printf(" *");
			}
			else if (i == 5)
			{
				printf("  *");
			}
		}

		printf("\n");
	}

	// N for purnima 
	printf("\n");
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 1; j++)
		{
			printf("*");
		}
		for (k = 1; k <= (i - 2); k++)
		{
			{
				if (i == 3 || i == 4 || i == 5)
					printf(" ");
			}
		}
		for (l = 1; l <= 1; l++)
		{
			if (i == 2 || i == 3 || i == 4)
			{
				printf("*");
			}
		}
		for (m = 1; m <= (4 - i); m++)
		{
			if (i == 1 || i == 2 || i == 3)
				printf(" ");
		}
		for (n = 1; n <= 1; n++)
		{
			printf("*");
		}
		printf("\n");

	}


	// I for 
	printf("\n");
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <=5;j++)
			{
				if (i == 1 || i == 5)
					printf("*");

			}
			for (k = 1; k <= 1;k++)
			{
				if (i==2||i==3||i==4)
				{
					printf("  *");
				}
			}
			printf("\n");
		}

		// M for purnima

		printf("\n");
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <= 1; j++)
			{
				printf("*");
				if (i == 1)
					printf("   ");
			}
			for (k = 1; k <= 1; k++)
			{
				if (i == 2)
				{
					printf("* *");
				}
				else if (i == 3)
				{
					printf(" * ");
				}
			}
			for (l = 1; l <= 3; l++)
			{
				if (i == 4 || i == 5)
				{
					printf(" ");
				}
			}
			for (m = 1; m <= 1; m++)
			{
				printf("*");
			}
			printf("\n");
		}

		// A for purnima
		printf("\n");
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <= 1; j++)
			{
				if (i == 1)
					printf("***");
				printf("*");
			}
			for (k = 1; k <= 3; k++)
			{
				if (i == 2 || i == 4 || i == 5)
					printf(" ");
			}
			for (l = 1; l <= 1; l++)
			{
				if (i == 3)
					printf("***");
				printf("*");
			}
			printf("\n");
		}
	
	// s for sir
		printf("\n\n\n\n");
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <= 5; j++)
			{
				if (i == 1 ||i==3|| i == 5)
					printf("*");
			}
			for (k = 1; k <= 1; k++)
			{
				if (i == 2)
					printf("*");
				else if (i == 4)
					printf("    *");
			}
			printf("\n");
		}

		// I for sir
		printf("\n");
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <= 5; j++)
			{
				if (i == 1 || i == 5)
					printf("*");

			}
			for (k = 1; k <= 1; k++)
			{
				if (i == 2 || i == 3 || i == 4)
				{
					printf("  *");
				}
			}
			printf("\n");
		}

		// R for sir
		printf("\n");
		for (i = 1; i <= 5; i++)
		{
			for (j = 1; j <= 1; j++)
			{
				printf("*");
			}
			for (k = 1; k <= 3; k++)
			{
				if (i == 1 || i == 3)
				{
					printf("*");
				}

			}
			for (l = 1; l <= 1; l++)
			{
				if (i == 2)
				{
					printf("  *");
				}
			}
			for (m = 1; m <= 1; m++)
			{
				if (i == 4)
				{
					printf(" *");
				}
				else if (i == 5)
				{
					printf("  *");
				}
			}

			printf("\n");
		}

	return 0;
}