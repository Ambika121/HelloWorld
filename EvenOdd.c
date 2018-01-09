#include <stdio.h>
int main()
{
  int num;
  printf("\nEnter the number");
  scanf("%d",&num);
  if(num%2==0)
    printf("\nNumber is Even");
  else
    printf("\nNumber is Odd");
  return 0;
}
