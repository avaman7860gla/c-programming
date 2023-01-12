#include<stdio.h>
int main()
{
	int i,j,n,sum;
	printf("enter any number to print perfect number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i-1;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}
