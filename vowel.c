#include <stdio.h>
 
int main(void) {
	char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a': printf("Character is vowel"); break;
    case 'e': printf("Character is vowel"); break;
    case 'i': printf("Character is vowel"); break;
    case 'o': printf("Character is vowel"); break;
    case 'u': printf("Character is vowel"); break;
    case 'A': printf("Character is vowel"); break;
    case 'E': printf("Character is vowel"); break;
    case 'I': printf("Character is vowel"); break;
    case 'O': printf("Character is vowel"); break;
    case 'U': printf("Character is vowel"); break;
    default : printf("Character is Consonent");
    }
	return 0;
}
