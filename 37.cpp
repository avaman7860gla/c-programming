#include <stdio.h>
int main()
{
	int a[10],i,j,n;
	int c=0;
	printf("Enter Number of elements in an array=");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
    	scanf("%d",&a[i]);
   	}     
 
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
    		if(a[i]==a[j])
    		{
    			c++;
			}
		}
	}
	printf("Total Number of Duplicate Elements in this Array=%d",c);
}
	     
