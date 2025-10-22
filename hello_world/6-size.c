#include <stdio.h>

int main(void)
{
    // Affichage des tailles des types avec les noms exacts comme dans l'exemple
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));
    // L'architecture de la machine peut changer la taille de long double
    printf("Size of a double: %zu byte(s)\n", sizeof(double));
    printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
    
    return 0;
}
