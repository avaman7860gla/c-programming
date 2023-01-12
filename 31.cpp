#include<stdio.h>
int main()
{
	int i;
	int x[i];
	for(i=0;i<=4;i++)
	{
		scanf("%d",&x[i]);
		printf("value of array=%d\n",x[i]);
	}
	int sum=0;
	for(i=0;i<=4;i++)
	{
		sum=sum+x[i];
	}
	printf("sum of all element in array=%d\n",sum);
}
