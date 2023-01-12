#include<stdio.h>
int main()
{
	char a;
	printf("Enter Alphabet/Digit/Special Character=");
	scanf("%c",&a);;
	((a>='a'&&a<='z')||(a>='A'&&a<='Z'))?printf("%c is character",a):(a>='0'&&a<='9')?printf("%c is digit",a):printf("%c is special character",a);
	
}
