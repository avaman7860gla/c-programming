#include<stdio.h>
int main()
{
	int n,i,p;
	printf("enter array size=");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter position at which you want of delete=");
	scanf("%d",&p);
	for(i=p-1;i<n-1;i++)
	{
		x[i]=x[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("elements are: %d\n",x[i]);
	}
}
