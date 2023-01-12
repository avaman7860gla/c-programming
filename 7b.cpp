#include <stdio.h>                             
int main()
{
    int n,b,m,a;
    printf("Enter any number: ");
    scanf("%d", &n);
    b=sizeof(int)*8;
    m=1<<(b-1);
    a=m&n;
    if(a==1)
        printf("MSB of %d is set (1)", n);
    else
        printf("MSB of %d is unset (0)",n);
}

