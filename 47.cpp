#include <stdio.h>
#include <math.h>
int p(int num);
int a(int num);
int pr(int num);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(p(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    if(a(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    if(pr(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
    return 0;
}
int p(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    { 
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    return 1; 
}
int a(int num) 
{
    int l, sum, o, d;
    sum = 0;
    o = num;
    d = (int) log10(num) + 1;
    while(num > 0)
    {
        l = num % 10;
        sum = sum + round(pow(l, d));
        num = num / 10;
  } 
    return(o == sum);
}
int pr(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (num == sum);
}

