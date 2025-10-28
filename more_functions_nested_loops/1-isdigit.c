#include "1-isdigit.h"  /* Inclure le fichier d'en-tête */

int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;  /* Si c'est un chiffre, retourne 1 */
    return 0;  /* Sinon, retourne 0 */
}
