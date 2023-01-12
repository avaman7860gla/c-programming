#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	float sum,avg,per;
	printf("enter marks of english out of 50=");
	scanf("%f",&a);
	printf("enter marks of chemistry out of 50=");
	scanf("%f",&b);
	printf("enter marks of computer out of 50=");
	scanf("%f",&c);
	printf("enter marks of mathematics out of 50=");
	scanf("%f",&d);
	printf("enter marks in electronics out of 50=");
	scanf("%f",&e);
	sum=a+b+c+d+e;
	avg=sum/5;
	per=(sum*100)/250;
	printf("sum of marks=%0.2f\n",sum);
	printf("average of marks=%0.2f\n",avg);
	printf("percentage=%0.2f\n",per);
	if(per>=90)
	printf("Grade=A");
	else if(per<90&&per>=75)
	printf("Grade=B");
	else if(per<75&&per>=60)
	printf("Grade=C");
	else if(per<60&&per>=50)
	printf("Grade=D");
	else if(per<50&&per>=33)
	printf("Grade=E");
	else
	printf("Grade=Fail");
	
}
