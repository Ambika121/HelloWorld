#include <stdio.h>
 
int main(void)
{
    int year, leap=0;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0)
         leap=1;
    if(year%100==0)
         leap=0;
    if(year%400==0)
         leap=1;
    if(leap)
         printf("leap yer");
    else
         printf("Not a leap year");
    return 0;
}
