#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si le caractère est un chiffre, sinon 0.
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
