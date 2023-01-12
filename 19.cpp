#include<stdio.h>
int main()
{
	int fact=1,n,i;
	printf("Enter any number to find the factorial=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d =%d",n,fact);
}
