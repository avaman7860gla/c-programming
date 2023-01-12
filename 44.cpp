#include<stdio.h>
int main()
{
    char a[40];
    int c=0, f=1,i;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i< c/2;i++)
    {
        if( a[i] != a[c-1-i] )
        {
            f=0;
        }
    }
    if(f==1)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
    
}

