#include<stdio.h>
int main()
{
	char x;
	printf("enter an albhabet to check is is vowel and consonant=");
	scanf("%c",&x);
	switch(x)
	{
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
	}
}
