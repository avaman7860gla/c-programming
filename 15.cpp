#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first side of triangle=");
	scanf("%d",&a);
	printf("Enter second side of triangle=");
	scanf("%d",&b);
	printf("Enter third side of triangle=");
	scanf("%d",&c);
	if(a==b&&b==c&&a==c)
	printf("Equilateral triangle");
	else if(a==b||a==c||b==c)
	printf("Isosceles triangle");
	else
	printf("Scalene");
}
