#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,s,t,sum;
	printf("Enter any number to check armstrong or not=");
	scanf("%d",&n);
	sum=0;
	r=n;
	s=log10(n)+1;
	while(n>0)
	{
		t=n%10;
		sum=sum+pow(t,s);
		n=n/10;
	}
	if(r==sum)
	{
		printf("%d is armstrong number",r);
	}
	else
	{
		printf("%d is not armstrong number",r);
	}
}
