#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("Value of a and b after swapping is %d and %d respectively.",a,b);
}
