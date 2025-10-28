#include <stdio.h>
#include "1-isdigit.h"  /* Inclure l'en-tête avec la déclaration de _isdigit */

int main(void)
{
    /* Tester la fonction _isdigit */
    printf("_isdigit('5'): %d\n", _isdigit('5'));  /* Devrait afficher 1 */
    printf("_isdigit('a'): %d\n", _isdigit('a'));  /* Devrait afficher 0 */
    printf("_isdigit('0'): %d\n", _isdigit('0'));  /* Devrait afficher 1 */
    printf("_isdigit('9'): %d\n", _isdigit('9'));  /* Devrait afficher 1 */
    printf("_isdigit('!'): %d\n", _isdigit('!'));  /* Devrait afficher 0 */
    return 0;
}

