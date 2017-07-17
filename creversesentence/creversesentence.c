/* recursively reverse a sentence entered by user  */

#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Your sentence reversed: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c); //

    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}
