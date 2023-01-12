#include<stdio.h>
int main()
{
	int days,year,weeks;
	printf("Enter number of days=");
	scanf("%d",&days);
	year=days/365;
	weeks=(days%365)/7;
	days=days-(year*365)-(weeks*7);
	printf("total days=%d years %d weeks %d days",year,weeks,days);
}
