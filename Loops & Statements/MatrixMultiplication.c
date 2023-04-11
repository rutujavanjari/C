#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9;
	int Mnum1,Mnum2,Mnum3,Mnum4,Mnum5,Mnum6,Mnum7,Mnum8,Mnum9;
	int a1,a2,a3,a4,a5,a6,a7,a8,a9;
	printf("we are having 3*3 matrix multiplication\n");
	printf("enter the values of first matrix\n");
	scanf("%d%d%d%d%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9);
	printf("enter the values of second matrix\n");
	scanf("%d%d%d%d%d%d%d%d%d",&Mnum1,&Mnum2,&Mnum3,&Mnum4,&Mnum5,&Mnum6,&Mnum7,&Mnum8,&Mnum9);
	a1=((num1*Mnum1)+(num2*Mnum4)+(num3*Mnum7));
	a2=((num1*Mnum2)+(num2*Mnum5)+(num3*Mnum8));
	a3=((num1*Mnum3)+(num2*Mnum6)+(num3*Mnum9));
	a4=((num4*Mnum1)+(num5*Mnum4)+(num6*Mnum7));
	a5=((num4*Mnum2)+(num5*Mnum5)+(num6*Mnum8));
	a6=((num4*Mnum3)+(num5*Mnum6)+(num6*Mnum9));
	a7=((num7*Mnum1)+(num8*Mnum4)+(num9*Mnum7));
	a8=((num7*Mnum2)+(num8*Mnum5)+(num9*Mnum8));
	a9=((num7*Mnum3)+(num8*Mnum6)+(num9*Mnum9));
	printf("the matrix Multiplication is :\n");
	printf(" %d %d %d \n",a1,a2,a3);
	printf(" %d %d %d \n",a4,a5,a6);
	printf(" %d %d %d \n",a7,a8,a9);
return 0;
}	
	