#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first angle of triangle=");
	scanf("%d",&a);
	printf("Enter second angle of triangle=");
	scanf("%d",&b);
	c=180-a-b;
	printf("Third angle of triangle=%d",c);
}
