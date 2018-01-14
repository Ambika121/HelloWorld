#include <stdio.h>
 
int main(void)
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
    	if(a>c)
    	{
    		printf("%d is largest",a);
    	}
    	else
    	{
    		printf("%d is largest",c);
    	}
    }
    else
    {
    	if(b>c)
    	{
    		printf("%d is largest",b);
    	}
    	else
    	{
    		printf("%d is largest",c);
    	}
    }
    return 0;
}
