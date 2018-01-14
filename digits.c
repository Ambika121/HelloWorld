#include <stdio.h>
 
int main(void)
{
    int n, count=0,p;
    printf("Enter n");
    scanf("%d",&n);
    while(n>1)
    {
        p=n%10;
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
