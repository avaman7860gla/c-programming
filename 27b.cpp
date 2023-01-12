#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter any number to check perfect number=");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n&&n>0)
	{
		printf("%d is perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
}
