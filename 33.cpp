#include<stdio.h>

int main()
{
	int n,a,p,i;
	printf("enter array size=");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("enter new value=");
	scanf("%d",&a);
	printf("Enter position=");
	scanf("%d",&p);
	n+1;
	for(i=n-1;i>=p;i--)
	{
		x[i+1]=x[i];
	}
	x[p]=a;
	for(i=0;i<=n;i++)
	{
		printf("%d\n",x[i]);
	}
}
