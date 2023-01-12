#include<stdio.h>
int main()
{
	int n,c,s,r;
	s=0;
	printf("enter any number to check palindrome number=");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	{
		printf("This is a palindrome number");
	}
	else
	{
		printf("This is not a palindrome number");
	}
}
