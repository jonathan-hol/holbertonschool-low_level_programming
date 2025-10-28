#include "main.h"  /* Inclure le fichier d'en-tête pour la déclaration */

/**
 * _isdigit - Vérifie si le caractère est un chiffre
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est un chiffre, 0 sinon
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')  /* Vérifie si c est entre '0' et '9' */
        return 1;
    return 0;
}
