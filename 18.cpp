#include<stdio.h>
int main()
{
	int x,n,i;
	printf("enter any integer to print a table=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		x=n*i;
		printf("%d*%d=%d\n",n,i,x);
	}
}
