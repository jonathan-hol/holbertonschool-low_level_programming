#include <stdio.h>

/** 
* Main - Entry point
*
* Imprime l'alphabet en min sauf 'e' et 'q' en utilisant putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'e' && letter != 'q')
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return (0);
}
