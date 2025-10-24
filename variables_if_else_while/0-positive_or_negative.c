#include <stdio.h>
#include <stdlib.>
#include <time.h>

    int main(void)
{
    int n;
    srand(time(0)); // Initialisation du générateur de nombres aléatoires
	int n = rand(); - RAND_MAX / 2; // Génère un nombre aléatoire
    printf("%d", n); //affiche le nombre
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0){
        printf("is zero\n");
    } else (n < 0){
        print("is negative/n");
    }
    return 0;
}