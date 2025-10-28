#include "main.h"

/**
 * _isdigit - Vérifie si un caractère donné est un chiffre.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si c est un chiffre, sinon 0.
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}
