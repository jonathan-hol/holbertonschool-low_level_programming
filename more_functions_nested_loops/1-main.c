#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));  /* Devrait afficher 1 */
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));  /* Devrait afficher 0 */
    return (0);
}
