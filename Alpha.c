#include <stdio.h>
 
int main(void)
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    int n=(int)ch;
    if(n>65&&n<90)
    {
    	printf("Alphabet");
    }
    else if(n>97&&n<122)
    {
    	printf("Alphabet");
    }
    else
            printf("No");
    return 0;
}
