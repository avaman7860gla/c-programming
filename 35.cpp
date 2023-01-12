#include <stdio.h>
int main()
{
    int a[100],n,i,num;
    printf("Enter Number of Elements in Array=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
        scanf("%d", &a[i]);
    }
    printf("Enter a number to serach in Array\n");
    scanf("%d", &num);
    for(i=0;i<n;i++)
	{
        if(a[i]==num)
		{
            printf("Number %d found at index %d\n", num,i);
        }
    }
}
