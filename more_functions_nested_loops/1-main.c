#include "main.h"
#include <stdio.h>

/**
 * main - Point d'entrée du programme.
 *
 * Return: Toujours 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c)); /* Teste avec un chiffre */

    c = 'a';
    printf("%c: %d\n", c, _isdigit(c)); /* Teste avec une lettre */

    return (0);
}

