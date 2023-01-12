#include<stdio.h>
int main()
{
	int m,n,i,j,q;
	printf("enter rows=");
	scanf("%d",&m);
	printf("enter column=");
	scanf("%d",&n);
	int x[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("enter any number to multiply=");
	scanf("%d",&q);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			x[i][j]=q*x[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",x[i][j]);
		}	
		printf("\n");
	}
}
