#include<stdio.h>
int main()
{
	int x[100],y[100],i,n;
	printf("Enter number of element in array=");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("enter value of element of first array=");
		scanf("%d",&x[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		y[i]=x[i];
	}
	for(i=0;i<=n-1;i++)
	{
		printf("value of copied array to first=%d\n",y[i]);
	}
}
