#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
 int main(void)
{
    char lettre;

for (lettre = 'a'; lettre <= 'z'; lettre++) {
    putchar(lettre); // afficher chaque lettre
}
    putchar('\n'); // Ajouter un saut de ligne après l'alphabet
    return (0);
}
