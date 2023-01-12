#include<stdio.h>
int main()
{
	int a,b,c,greatest;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	printf("Enter value of c=");
	scanf("%d",&c);
	greatest=a>b?(a>c?a:c):(b>c?b:c);
	printf("\nthe greatest number is %d",greatest);
}
