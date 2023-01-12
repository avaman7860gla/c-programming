#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,pwr;
	float rtt;
	printf("Enter any number=");
	scanf("%d",&a);
	printf("Enter power of number=");
	scanf("%d",&b);
	pwr=pow(a,b);
	rtt=pow(a,0.5);
	printf("%d power of %d=%d\n",b,a,pwr);
	printf("square root of %d=%f\n",a,rtt);
}
