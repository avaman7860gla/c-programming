#include<stdio.h>
int main()
{
	int n,i;
	printf("enter any natural number n to get sum=");
	scanf("%d",&n);
	int sum=0;
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nSum of natural number upto n=%d",sum);
}
