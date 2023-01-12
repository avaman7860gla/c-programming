#include<stdio.h>
int main()
{
	int n;
	printf("Enter array size=");
	scanf("%d",&n);
	int x[n],i,j,c;
	for(i=0;i<=n-1;i++)
	{
		printf("enter value of element=\n");;
		scanf("%d",&x[i]);
	}
	for(j=0;j<=n-1;j++)
	{
		for(i=0;i<=n-2;i++)
		{
			if(x[i]>x[i+1])
			{
				c=x[i];
				x[i]=x[i+1];
				x[i+1]=c;
			}
		}
	}
	
			printf("2nd largest number=%d",x[3]);
		
}
