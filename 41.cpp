#include<stdio.h>
 
int main()
{
 	int i,j,m,n,a[10][10],c=1;
  
 	printf("Enter Number of rows and columns=");
 	scanf("%d %d",&i,&j);
 	for(m=0;m<i;m++)
  	{
   		for(n=0;n<j;n++)
    	{
      		scanf("%d",&a[m][n]);
    	}
  	}
  	for(m=0;m<i;m++)
  	{
   		for(n=0;n<j;n++)
    	{
    		printf("%d",a[m][n]);
    	}
    	printf("\n");
 	}
 	for(m=0;m<i;m++)
  	{
   		for(n=0;n<j;n++)
    	{
    		if(a[m][n]!=1 && a[n][m] != 0)
    		{
    			c=0;
			}
   	 	}
  	}
  	if(c==1)
  	{
  		printf("Identity Matrix ");
	}
	else
	{
		printf("Not an Identity Matrix ");
	}
}

