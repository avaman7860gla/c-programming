#include<stdio.h>
int main()
{
	int n,i;
	printf("enter any number to get sum of even number=");
	scanf("%d",&n);
	int sum=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	printf("Sum of only even number=%d",sum);
}
