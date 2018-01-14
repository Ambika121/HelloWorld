#include <stdio.h>
 
int main(void)
{
    int n,k, a[20],i,sum=0;
    printf("Enter n and k");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    {
    	sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
