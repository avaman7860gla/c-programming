#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,s,t,i;
	printf("Enter any number to print armstrong number between them=");
	scanf("%d",&n);
	int sum;
	for(i=1;i<=n;i++)
	{
		sum=0;
		r=i;
		s=log10(r)+1;
		while(r>0)
		{
			t=r%10;
			sum=sum+pow(t,s);
			r=r/10;
		}
		if(i==sum)
		{
			printf("%d\n",i);
		}
	}
}
