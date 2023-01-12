#include<stdio.h>
int main()
{
	float u,cst,x,bill,tax;
	printf("Enter number of unit=");
	scanf("%f",&u);
	printf("cost of 1 unit=");
	scanf("%f",&cst);
	x=u*cst;
	tax=(5*x)/100;
	bill=x+tax;
	printf("Total electricity bill=%0.2f",bill);
}
