#include "main.h"  /* Inclure main.h pour déclarer _isupper */

/* Définition de la fonction _isupper */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);  /* C'est une majuscule */
    }
    return (0);  /* Ce n'est pas une majuscule */
}
