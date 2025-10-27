#include "main.h"  /* Inclure main.h pour déclarer _isupper */

/**
 * _isupper - Vérifie si un caractère est une majuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);  /* C'est une majuscule */
    }
    return (0);  /* Ce n'est pas une majuscule */
}
